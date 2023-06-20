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

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
