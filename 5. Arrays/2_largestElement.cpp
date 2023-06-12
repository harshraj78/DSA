#include <iostream>
using namespace std;

int largestElement(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 96, 79, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << largestElement(arr, size);
    return 0;
}
