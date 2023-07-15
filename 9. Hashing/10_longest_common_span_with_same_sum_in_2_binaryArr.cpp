// given two binary arrays arr1[] and arr2[] of same size n we have to find the longest common span with same sum
// ex: arr1[] = {0, 1, 0, 0, 0, 0}
//     arr2[] = {1, 0, 1, 0, 0, 1}
// output: 4
// explanation: the longest span with same sum is from index 1 to 4

// 1. Naive Approach:
//     - Time Complexity: O(n*n)
//     - Space Complexity: O(1)
// explanation: we will traverse the array and for each element we will check if there is any subarray with given sum
int longestCommonSpan(int arr1[], int arr2[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = i; j < n; j++)
        {
            sum1 += arr1[j];
            sum2 += arr2[j];
            if (sum1 == sum2)
                res = max(res, j - i + 1);
        }
    }
    return res;
}

// 2. efficient approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
// explanation: we will use a hash table to store the difference of prefix sum and then we will traverse the array and for each element we will check if the difference of prefix sum is present in the hash table or not
// hint this problem is goint to reduce to the problem of finding the longest subarray with 0 sum in an array
int longestCommonSpan(int arr1[], int arr2[], int n)
{
    int res = 0, prefixSum1 = 0, prefixSum2 = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        prefixSum1 += arr1[i];
        prefixSum2 += arr2[i];
        int diff = prefixSum1 - prefixSum2;
        if (diff == 0)
            res = i + 1;
        if (m.find(diff) == m.end())
            m[diff] = i;
        if (m.find(diff) != m.end())
            res = max(res, i - m[diff]);
    }
    return res;
}