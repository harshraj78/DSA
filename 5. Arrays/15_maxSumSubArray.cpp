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
// explanation :- compute the sum of the first k elements out of n terms using a linear loop and store the maximum sum found so far in res. Then, traverse the array from (k+1)th element to nth element. To get the current sum of block of k elements, subtract the first element from the previous block and add the current element to the sum of the previous block. Update the res, if required.
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
