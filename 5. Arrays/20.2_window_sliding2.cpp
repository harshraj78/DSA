// Given an unsorted array of non-negative integers, Find if there is a subarray with given sum.
// i/p:- arr[] = {1,4,20,3,10,5}, sum = 33
// o/p:- true
// i/p:- arr[] = {1,4,0,0,3,10,5}, sum = 7
// o/p:- true
// i/p:- arr[] = {1,4}, sum = 0
// o/p:- false

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)
bool isPresnt(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if (curr_sum == sum)
            {
                return true;
            }
        }
    }
    return false;
}

// 2. Efficient Solution:- (Using Window Sliding Technique)
// Time Complexity = O(n)
// Space Complexity = O(1)
// Explanation:-

bool isPresnt(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0;
    for (int end = 1; end <= n; end++)
    {
        while (curr_sum > sum && start < end - 1)
        {
            curr_sum -= arr[start];
            start++;
        }
        if (curr_sum == sum)
        {
            return true;
        }
        if (end < n)
        {
            curr_sum += arr[i];
        }
    }
    return (curr_sum == sum);
}
