// Given an array of integer , find if it has an equilibrium point or not.
// Equilibrium point is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
// i/p:- arr[] = {3,4,8,-9,20,6}
// o/p:- true
// Explanation:- Equilibrium point is 20, because sum of elements at lower indexes is 3+4+8-9=6 , and sum of elements at higher indexes is 6.

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)
bool isEquilibrium(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int l_sum = 0, r_sum = 0;
        for (int j = 0; j < i; j++)
        {
            l_sum += arr[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            r_sum += arr[j];
        }
        if (l_sum == r_sum)
        {
            return true;
        }
    }
    return false;
}

// 2. Efficient Solution:- (Using Prefix Sum)
// Time Complexity = O(n)
// Space Complexity = O(n)
bool isEquilibrium(int arr[], int n)
{
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int l_sum = (i == 0) ? 0 : prefixSum[i - 1];
        int r_sum = prefixSum[n - 1] - prefixSum[i];
        if (l_sum == r_sum)
        {
            return true;
        }
    }
    return false;
}

// 3. More Efficient Solution:- 
// Time Complexity = O(n)
// Space Complexity = O(1)
bool isEquilibrium(int arr[], int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }
    int l_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (l_sum == totalSum - arr[i])
        {
            return true;
        }
        l_sum += arr[i];
        totalSum -= arr[i];
    }
}
