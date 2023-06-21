// Selection Sort:-
// The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// 1. Naive Approach:-
void selectionSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // n-1 passes
    {
        int minIndex = 0;
        for (int j = i + 1; j < n; j++) // n-i-1 comparisons in each pass( n-i-1 because after each pass, the largest element gets placed at the end of the array)
        {
            if (arr[j] < arr[minIndex]) // find the minimum element in the unsorted array
                minIndex = j;
        }
        temp[i] = arr[minIndex]; // swap the minimum element with the first element of the unsorted array
        arr[minIndex] = arr[i];
    }
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

// 2. Efficient Approach:- in place implementation
// no need of extra space
void selectionSort(int arr[], int n)
{
    for (i = 0; i < n; i++)
    {
        int minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
