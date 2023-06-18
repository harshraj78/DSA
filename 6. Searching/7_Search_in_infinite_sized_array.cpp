// we have given an infinite size array and an element to search in that array and we have to return the index of that element if it is present in the array otherwise return -1.
// i/p:- arr[] = {1, 10, 15, 20, 40, 80, 90, 100, 120, 150, ...........};
//        x = 100;
// o/p:- 7
// i/p:- arr[] = {1, 10, 15, 20, 40, 80, 90, 100, 120, 150, ...........};
//        x = 110;
// o/p:- -1

// 1. Naive approach:- O(position of element x in the array)
int search(int arr[], int x)
{
    int i = 0;
    while (true)
    {
        if (arr[i] == x)
            return i;
        if (arr[i] > x)
            return -1;
        i++;
    }
}

// 2. Effective approach :- O(log(position of element x in the array))
// we will use the concept of binary search. we didn't know the size of the array so we will start with the index 1 and then we will double the index until we find the element greater than x.
// double the index until we find the element greater than x. then we will apply binary search between the previous index and current index.
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int search(int arr[], int x)
{
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (arr[i] < x)
        i = i * 2;
    if (arr[i] == x)
        return i;
    return binarySearch(arr, i / 2 + 1, i - 1, x);
}
