// we are given two sorted arrays and we have to merge them into one sorted array.
// we will use merge function to merge two sorted arrays.

// 1. Naive Approach:
// time complexity: O((m+n)log(m+n))
// space complexity: O(m+n)

void merge(int arr1[], int arr2[], int m, int n)
{
    int arr3[m + n];
    for (int i = 0; i < m; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr3[m + i] = arr2[i];
    }
    sort(arr3, arr3 + m + n);
    for (int i = 0; i < m + n; i++)
    {
        cout << arr3[i] << " ";
    }
}

// 2. Efficient Approach:
// time complexity: O(m+n)
// space complexity: O(1)

void merge(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else
        {
            cout << arr2[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << arr2[j] << " ";
        j++;
    }
}
