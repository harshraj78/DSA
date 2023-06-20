// Bubble Sort:-
// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // n-1 passes
    {
        for (int j = 0; j < n - i - 1; j++) // n-i-1 comparisons in each pass( n-i-1 because after each pass, the largest element gets placed at the end of the array)
        {
            if (arr[j] > arr[j + 1]) // swap if current element is greater than next element
                swap(arr[j], arr[j + 1]);
        }
    }
}

// optimized bubble sort:-
// The above function always runs O(n^2) time even if the array is sorted. It can be optimized by stopping the algorithm if inner loop didn’t cause any swap.
// Time Complexity: O(n^2) in worst case. O(n) in best case when array is already sorted.
// Space Complexity: O(1)

void bubbleSortOptimized(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++) // n-1 passes
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) // n-i-1 comparisons in each pass( n-i-1 because after each pass, the largest element gets placed at the end of the array)
        {
            if (arr[j] > arr[j + 1]) // swap if current element is greater than next element
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) // if no two elements were swapped by inner loop, then break
            break;
    }
}
