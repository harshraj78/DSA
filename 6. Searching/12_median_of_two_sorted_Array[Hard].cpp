// Given two sorted arrays, a[] and b[], task is to find the median of these sorted arrays, in O(log(min(n, m)), when n is the number of elements in the first array, and m is the number of elements in the second array.
// leetcode:- 4. Median of Two Sorted Arrays (Hard)
// https://leetcode.com/problems/median-of-two-sorted-arrays/
// https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/

// Approach 1:- Naive approach
// 1. Take the union of both the arrays.
// 2. Sort the union array.
// 3. If the size of the union array is odd then median will be unionArray[size/2].
// 4. If the size of the union array is even then median will be (unionArray[size/2] + unionArray[size/2 - 1]) / 2.
// time complexity:- O((n + m)log(n + m))

// Approach 2:- binary search approach
// 1. Take the smaller array and do binary search on it.
// 2. Now, we will divide the smaller array into two parts at the mid index.
// 3. Now, we will divide the larger array into two parts such that the number of elements in the left part of the smaller array and the larger array is equal.
// 4. Now, we will check if the last element of the left part of the smaller array is less than or equal to the first element of the right part of the larger array and the last element of the left part of the larger array is less than or equal to the first element of the right part of the smaller array.
// 5. If the above condition is true then we will return the median.
// 6. If the above condition is false then we will move the mid index of the smaller array to the left if the last element of the left part of the smaller array is greater than the first element of the right part of the larger array.

// time complexity:- O(log(min(n, m)))
// space complexity:- O(1)
double findMedianSortedArrays(int arr1[], int n, int arr2[], int m)
{
    if (n > m)
        return findMedianSortedArrays(arr2, m, arr1, n);
    int low = 0, high = n;
    while (low <= high)
    {
        int i1 = (low + high) / 2;
        int i2 = (n + m + 1) / 2 - i1;
        int min1 = (i1 == n) ? INT_MAX : arr1[i1];
        int max1 = (i1 == 0) ? INT_MIN : arr1[i1 - 1];
        int min2 = (i2 == m) ? INT_MAX : arr2[i2];
        int max2 = (i2 == 0) ? INT_MIN : arr2[i2 - 1];
        if (max1 <= min2 && max2 <= min1)
        {
            if ((n + m) % 2 == 0)
                return (double)(max(max1, max2) + min(min1, min2)) / 2;
            else
                return (double)max(max1, max2);
        }
        else if (max1 > min2)
            high = i1 - 1;
        else
            low = i1 + 1;
    }
    return -1;
}
