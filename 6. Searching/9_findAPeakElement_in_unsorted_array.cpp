// Find a peak element in an array which is not sorted.

// 1. Naive approach:- O(n) time complexity. 
int findPeak(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    if (arr[0] >= arr[1])
        return arr[0];
    if (arr[n - 1] >= arr[n - 2])
        return arr[n - 1];
    for (int i = 1; i < n - 1; i++)
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return arr[i];
}

// ODD QUESTION:- here array is not sorted still we are applying binary search. why?
// ANS:- bcz we are selecting potential half for which we are sure that the element will be present in that half. so we are reducing the search space by half.
// logic:- if the mid element is greater than the first element of the array then we will check if the element x is greater than the first element and less than the mid element then we will apply binary search between the first element and mid element. otherwise we will apply binary search between the mid element and last element.
// if the mid element is less than the first element of the array then we will check if the element x is greater than the mid element and less than the last element then we will apply binary search between the mid element and last element. otherwise we will apply binary search between the first element and mid element.

// 2. Effective approach:- O(logn) time complexity.
int findPeak(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return mid;
        if (mid > 0 && arr[mid - 1] >= arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
