// given an array of find if there is a subarray with 0 sum
// ex: arr[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2}
// output: yes
// explanation: there is a subarray with 0 sum from index 1 to 4

// 1. Naive Approach:
//     - Time Complexity: O(n*n)
//     - Space Complexity: O(1)
// explanation: we will traverse the array and for each element we will check if there is any subarray with 0 sum
bool isSubArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == 0)
                return true;
        }
    }
    return false;
}

// 2. efficient approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
// explanation: we will use a hash table to store the prefix sum and then we will traverse the array and for each element we will check if the prefix sum is present in the hash table or not
bool isSubArr(int arr[], int n)
{
    unordered_set<int> s;
    int prefixSum = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (prefixSum == 0 || s.find(prefixSum - 0) != s.end()) // here we are checking for 0 sum but we can check for any sum by replacing 0 with that sum
            return true;
        s.insert(prefixSum);
    }
    return false;
}