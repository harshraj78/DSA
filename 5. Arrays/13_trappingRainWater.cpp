// Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1,
// compute how much water can be trapped between the blocks during the rainy season.

// Example 1:
// Input: arr[] = {2, 0, 2}
// Output: 2
// Explanation:
// The structure is like below
// | |
// |_|
// We can trap 2 units of water in the middle gap.

// Example 2:
// Input: arr[] = {3, 0, 0, 2, 0, 4}
// Output: 10
// Explanation:
// The structure is like below
//      |
// |    |
// |  | |
// |__|_|
// We can trap "3*2 units" of water between 3 an 2,
// "1 unit" on top of bar 2 and "3 units" between 2

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)
int getWater(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lMax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lMax = max(lMax, arr[j]);
        }
        int rMax = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            rMax = max(rMax, arr[j]);
        }
        res += min(lMax, rMax) - arr[i];
    }
    return res;
}

// 2. Efficient Solution:- (Using extra space) precomputation
// Time Complexity = O(n)
// Space Complexity = O(n)
// We can use two arrays to store the maximum height of bars from the left and right sides correspondingly.
// Then use these arrays to update the water level at each index of the array.
// Water trapped at any element = min(max_left, max_right) – arr[i]
int getWater(int arr[], int n)
{
    int res = 0;
    int lMax[n], rMax[n];
    lMax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lMax[i] = max(arr[i], lMax[i - 1]);
    }
    rMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rMax[i] = max(arr[i], rMax[i + 1]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        res += min(lMax[i], rMax[i]) - arr[i];
    }
    return res;
}
