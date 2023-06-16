// Find the maximum sum of k consecutive elements in the array
// i/p :- arr[] = {1,8,30,-5,20,7} , k = 3
// o/p :- 45
// explanation :- {30,-5,20}

// 1. Naive Solution:-
// Time Complexity = O(n*k)
// Space Complexity = O(1)
int maxSum(int arr[], int n, int k)
{
    int max_sum = INT_MIN;
    for (int i = 0; i + k - 1 < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[i + j];
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

// 2. Efficient Solution:- Sliding Window Technique, substraction of first element of previous window and addition of last element of current window
// Time Complexity = O(n)
// Space Complexity = O(1)
int maxSum(int arr[], int n, int k)
{
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        curr_sum += arr[i];
    }
    int max_sum = curr_sum;
    for (int i = k; i < n; i++)
    {
        curr_sum += (arr[i] - arr[i - k]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
