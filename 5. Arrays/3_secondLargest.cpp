// I/P:- arr[] = {1, 2, 3, 4, 5, 96, 79, 8, 9, 10};
// O/P:- 79

// I/p:- arr[] = {20, 10, 20, 8, 12};
// O/p:- 12

#include <iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        // This condition is added to handle the case when all the elements in the array are same.
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] < arr[res])
            {
                res = i;
            }
        }
    }
}

int main()
{
    int arr[] = {20, 10, 20, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << secondLargest(arr, n);
    return 0;
}
