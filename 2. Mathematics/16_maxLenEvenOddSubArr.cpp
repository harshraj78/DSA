// we are given an array. we need to find out length of the longedt sub-Arrya, that has alternating even-odd elements.
// i/p:- arr[] = {10,12,14,7,8}
// o/p:- 3
// explanation:- {14,7,8}
// i/p:- arr[] = {7,10,13,14}
// o/p:- 0
// explanation:- no sub-Array has alternating even-odd elements.
// i/p:- arr[] = {10,12,8,4}
// o/p:- 4
// explanation:- {10,12,8,4}

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)
int maxLenEvenOddSubArr(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
            {
                curr++;
            }
            else
            {
                break;
            }
        }
        res = max(res, curr);
    }
    return res;
}

// 2. Efficient Solution:-
// Time Complexity = O(n)
// Space Complexity = O(1)
int maxLenEvenOddSubArr(int arr[], int n)
{
    int res = 1, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            curr = 1;
        }
    }
    return res;
}
