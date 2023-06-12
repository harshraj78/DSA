// Reverse the given array:-
// I/P:- arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// O/P:- arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 96, 79, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
