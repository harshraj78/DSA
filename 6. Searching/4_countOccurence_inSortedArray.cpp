// given a sorted array find the occurence of a given element in the array.
// i/p: arr[] = {1, 10, 10, 10, 20, 20, 40}, target = 20
// o/p: 2
// i/p: arr[] = {1, 10, 10, 10, 20, 20, 40}, target = 10
// o/p: 3
// i/p: arr[] = {1, 10, 10, 10, 20, 20, 40}, target = 30
// o/p: -1

// 1. (similar to binary search) :- firstOccurence and lastOccurence from 6. Searching\2_index_of_first_occurence.cpp and 6. Searching\3_index_of_last_occurence.cpp
// time complexity:- O(logn)
int countOccurence(int arr[], int n, int target)
{
    int first = firstOccurence(arr, n, target); // O(logn)
    if (first == -1)
        return 0;
    else
        return lastOccurence(arr, n, target) - first + 1; // O(logn)
}
