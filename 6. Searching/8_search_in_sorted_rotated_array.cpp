// we are given a sorted rotated array and an element to search in that array and we have to return the index of that element if it is present in the array otherwise return -1.
// i/p:- arr[] = {15, 20, 40, 50, 60, 70, 80, 90, 100, 110, 5, 10};
//       x = 100;
// o/p:- 8
// i/p:- arr[] = {15, 20, 40, 50, 60, 70, 80, 90, 100, 110, 5, 10};
//       x = 120;
// o/p:- -1

// 1. Naive approach:- O(n) time complexity.
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// 2. Effective approach:- O(logn) time complexity.
// we will use the concept of binary search.
// we will find the mid element and then we will check if the mid element is equal to x then we will return the mid index. otherwise we will check if the mid element is greater than the first element of the array then we will check if the element x is greater than the first element and less than the mid element then we will apply binary search between the first element and mid element. otherwise we will apply binary search between the mid element and last element.
int search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] >= arr[low])
        {
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (x > arr[mid] && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
