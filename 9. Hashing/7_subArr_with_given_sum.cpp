// given an array of find if there is a subarray with given sum
// ex: arr[] = {5, 8, 6, 13, 3, -1}
//     sum = 22
// output: yes
// explanation: there is a subarray with sum 22 from index 1 to 3

// 1. Naive Approach:
//     - Time Complexity: O(n*n)
//     - Space Complexity: O(1)
// explanation: we will traverse the array and for each element we will check if there is any subarray with given sum
bool isSubArr(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            if (currSum == sum)
                return true;
        }
    }
    return false;
}

// 2. efficient approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
// explanation: we will use a hash table to store the prefix sum and then we will traverse the array and for each element we will check if the prefix sum is present in the hash table or not
bool isSubArr(int arr[], int n, int sum)
{
    unordered_set<int> s;
    int prefixSum = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (prefixSum == sum || s.find(prefixSum - sum) != s.end())
            return true;
        s.insert(prefixSum);
    }
    return false;
}