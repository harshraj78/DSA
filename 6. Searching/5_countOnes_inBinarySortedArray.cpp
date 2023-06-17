// Given a Sorted Binary Array having only 0s and 1s, find the count of 1s in it.
//  i/p: arr[] = {0, 0, 0, 1, 1, 1, 1, 1}
//  o/p: 5
//  i/p: arr[] = {0, 0, 0, 0}
//  o/p: 0
//  i/p: arr[] = {1, 1, 1, 1}
//  o/p: 4

// 1. Naive approach:- O(n)
int countOnes(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == 1)
            return n - i;
    return 0;
}

// 2. (similar to binary search) :- O(logn)
int countOnes(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 0)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return n - mid;
            else
                high = mid - 1;
        }
    }
    return 0;
}
