// There are 3 operations on arrays:
// 1. Insertion
// 2. Deletion
// 3. Traversal

#include <iostream>
using namespace std;

int insertion(int arr[], int size, int index, int element)
{
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    size++;
    return size;
}

int deletion(int arr[], int size, int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    return size;
}

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5, index = 2, element = 45;

    cout << "Before Insertion: ";
    traversal(arr, size);
    cout << endl;

    size = insertion(arr, size, index, element);
    cout << "After Insertion: ";
    traversal(arr, size);

    cout << endl
         << "Before Deletion: ";
    traversal(arr, size);

    size = deletion(arr, size, index);
    cout << endl
         << "After Deletion: ";
    traversal(arr, size);

    return 0;
}