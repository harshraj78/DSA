// given an array and a sum we have to find the longest subarray with given sum
// ex: arr[] = {8, 3, 1, 5, -6, 6, 2, 2}
//     sum = 4
// output: 5
// explanation: there are two subarrays with sum 4 i.e. {3, 1}, {4} but the longest subarray is {3, 1, 5, -6, 6}

// 1. Naive Approach:
//     - Time Complexity: O(n*n)
//     - Space Complexity: O(1)
// explanation: we will traverse the array and for each element we will check if there is any subarray with given sum
int longestSubArr(int arr[], int n, int sum)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            if (currSum == sum)
                res = max(res, j - i + 1);
        }
    }
    return res;
}

// 2. efficient approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
// explanation: we will use a hash table to store the prefix sum and then we will traverse the array and for each element we will check if the prefix sum is present in the hash table or not
int longestSubArr(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int prefixSum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (prefixSum == sum) // this is for the case when the subarray starts from index 0
            res = i + 1;
        if (m.find(prefixSum - sum) != m.end()) // this is for the case when the subarray starts from any index other than 0 and ends at index i (i.e. current index)
            res = max(res, i - m[prefixSum - sum]);
        if (m.find(prefixSum) == m.end()) // this is for the case when the subarray starts from any index other than 0 and ends at index j (i.e. any index before current index)
            m[prefixSum] = i;
    }
    return res;
}