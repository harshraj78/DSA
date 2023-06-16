// what is circular sub-Array?
// array is circular means, we can start from any index and traverse the array in circular manner.

// Q. Given an array of size n, we need to find the maximum sum of circular sub-Array.
// i/p:- arr[] = {5,-2,3,4}
// o/p:- 12
// explanation:- if we take sub-Array as {3,4,5} then sum is 12.

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)
int maxCircularSumSubArr(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr_max = arr[i], curr_sum = arr[i];
        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            curr_sum += arr[index];
            curr_max = max(curr_max, curr_sum);
        }
        res = max(res, curr_max);
    }
    return res;
}

// 2. Efficient Solution:-
// Time Complexity = O(n)
// Space Complexity = O(1)

// idea is that remove the minimum sub-Array sum from total sum of array.
// and the remaining sum is the maximum sub-Array sum.
// for finding minimum sub-Array sum we use kadane's algorithm.
// and for finding total sum of array we use simple for loop.
// then invert the sign of each element of array so that we will get the minimum sum sub array as maximum sum sub array.
// then add this minimum sum sub array to total sum of array.
// and the remaining sum is the maximum sum sub array.
// for finding maximum sum sub array we use kadane's algorithm.
int kadane(int arr[], int n)
{
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
int maxCircularSumSubArr(int arr[], int n)
{
    int max_kadane = kadane(arr, n);
    if (max_kadane < 0)
    {
        return max_kadane;
    }
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_wrap = arr_sum + kadane(arr, n);
    return max(max_kadane, max_wrap);
}
