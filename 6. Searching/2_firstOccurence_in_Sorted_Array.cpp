// we have given a sorted array and we have to find the index of first occurence of a given element.
// might contain duplicates also.

// time complexity:- O(logn)
// space complexity:- O(logn)
// 1. recursive approach:- (similar to binary search)
int firstOccurence(int arr[], int low, int high, int target)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] > target)
        return firstOccurence(arr, low, mid - 1, target);
    else if (arr[mid] < target)
        return firstOccurence(arr, mid + 1, high, target);
    // explananation :- if arr[mid] == target, then we have to check if it is the first occurence or not.
    // if mid == 0, then it is the first occurence.
    // if arr[mid - 1] != arr[mid], then it is the first occurence.
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;
        else
            return firstOccurence(arr, low, mid - 1, target);
    }
}

// 2. iterative approach:-
// time complexity:- O(logn)
// space complexity:- O(1)
int firstOccurence(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > target)
            high = mid - 1;
        else if (arr[mid] < target)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}
