// if you are given an array, and integer k, and sum s, find if there is subarray of size k with sum s or not.
// i/p:- arr[] = {1,2,3,4,5}, k = 3, s = 9
// o/p:- true

// 1. Window Sliding Technique:-
// Time Complexity = O(n)
// Space Complexity = O(1)

bool isPresnt(int arr[], int n, int k, int sum)
{
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        curr_sum += arr[i];
    }
    if (curr_sum == sum)
    {
        return true;
    }
    for (int i = k; i < n; i++)
    {
        curr_sum += (arr[i] - arr[i - k]);
        if (curr_sum == sum)
        {
            return true;
        }
    }
    return false;
}
