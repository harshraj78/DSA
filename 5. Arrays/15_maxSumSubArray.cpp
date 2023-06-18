// Given an array arr[] of size N. Find the maximum sum for subarray.
// i/p :- arr[] = {1,2,3,-1,-4,5,2,3,6}
// o/p :- 16
// explanation :- {5,2,3,6}
// i/p :- arr[] = {-1,-2,-3,-4}
// o/p :- -1
// explanation :- {-1}

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)
int maxSumSubArray(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            res = max(res, curr);
        }
    }
    return res;
}

// 2. Efficient Solution:-
// Time Complexity = O(n)
// Space Complexity = O(1)
int maxSumSubArray(int arr[], int n)
{
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
