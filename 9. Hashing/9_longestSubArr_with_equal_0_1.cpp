// we are given a binary array and we have to find the length of longest subarray with equal number of 0 and 1
// ex: arr[] = {1, 0, 1, 1, 1, 0, 0}
// output: 6
// explanation: the longest subarray with equal number of 0 and 1 is {1, 0, 1, 1, 1, 0}

// 1. Naive Approach:
//     - Time Complexity: O(n*n)
//     - Space Complexity: O(1)
int longestSubArr(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count0 = 0, count1 = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 0)
                count0++;
            else
                count1++;
            if (count0 == count1)
                res = max(res, j - i + 1);
        }
    }
    return res;
}

// 2. efficient approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
// explanation: we will use a hash table to store the prefix sum and then we will traverse the array and for each element we will check if the prefix sum is present in the hash table or not
// idea: we will replace 0 with -1 and then we will find the longest subarray with sum 0
int longestSubArr(int arr[], int n)
{
    unordered_map<int, int> m;
    int sum = 0, maxLen = 0, endingIndex = -1;
    for (int i = 0; i < n; i++)
    {
        arr[i] = (arr[i] == 0) ? -1 : 1;
        sum += arr[i];
        if (sum == 0)
        {
            maxLen = i + 1;
            endingIndex = i;
        }
        if (m.find(sum) != m.end())
        {
            if (maxLen < i - *m.find(sum))
            {
                maxLen = i - *m.find(sum);
                endingIndex = i;
            }
        }
        else
            m.insert(sum);
    }
    for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == -1) ? 0 : 1;
    cout << endingIndex - maxLen + 1 << " to " << endingIndex << endl;
    return maxLen;
}