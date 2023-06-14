// we assume that we know the prices of a stock for upcoming days and we are allowed to buy at most one stock and sell at most one stock. We need to maximize the profit.
// example:-
// Input: price[] = {1, 5, 3, 8, 12}
// Output: 13
// Explanation: Buy at price 1, sell at 5 and buy at 3 and sell at 12.
// If we buy and sell stocks at the right time, we can earn maximum profit.

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)

int maxProfit(int price[], int start, int end)
{
    if (end <= start)
    {
        return 0;
    }
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (price[j] > price[i])
            {
                int curr_profit = price[j] - price[i] + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

// 2. Efficient Solution:-
// Time Complexity = O(n)
// Space Complexity = O(1)

int maxProfit(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
        {
            profit += price[i] - price[i - 1];
        }
    }
    return profit;
}
