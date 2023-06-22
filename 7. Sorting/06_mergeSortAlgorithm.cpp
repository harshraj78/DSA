// we divided array into two parts and then sort them and then merge them

// 3. Merge Sort Algorithm:
// time complexity: O(nlogn)
// space complexity: O(n)

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + (r - l) / 2); // middle index similar to (l+r)/2 but this is more efficient
        mergeSort(arr, l, m);      // recursive call for left part of array
        mergeSort(arr, m + 1, r);  // recursive call for right part of array
        merge(arr, l, m, r);       // merge function to merge left and right part of array code is in 05_mergeFunction.cpp
    }
}
