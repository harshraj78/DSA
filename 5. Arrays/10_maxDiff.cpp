// maximum value of arr[j] - arr[i] such that j>i
// I/P:- arr[] = {2, 3, 10, 6, 4, 8, 1}
// O/P:- 8
// I/P:- arr[] = {7, 9, 5, 6, 3, 2}
// O/P:- 2

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)
int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            res = max(res, arr[j] - arr[i]);
        }
    }
    return res;
}

// 2. Efficient Solution:-
// Time Complexity = O(n)
// Space Complexity = O(1)
int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int minVal = arr[0];
    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }
    return res;
}
