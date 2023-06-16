// Given a fixed arrat and muliple queries of following types on the array, how to efficiently perform them?
// i/p:- arr[] = {2,8,3,9,6,5,4}
// query1:- getSum(0,2)
// o/p:- 13
// query2:- getSum(1,3)
// o/p:- 20
// query3:- getSum(2,6)
// o/p:- 27

// 1. Naive Solution:-
// Time Complexity = O(n)
// Space Complexity = O(1)
int getSum(int arr[], int n, int l, int r)
{
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// 2. Efficient Solution:- (Using Prefix Sum)
// Time Complexity = O(n):- (for precomputing prefix sum) + O(1):- (for each query)
// Space Complexity = O(n):- (for prefix sum array)
// Explanation:- precumpute prefix sum array and then for each query just return the difference of prefix sum of r and l-1.
int getSum(int arr[], int n, int l, int r)
{
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    if (l != 0)
    {
        return prefixSum[r] - prefixSum[l - 1];
    }
    else
    {
        return prefixSum[r];
    }
}
