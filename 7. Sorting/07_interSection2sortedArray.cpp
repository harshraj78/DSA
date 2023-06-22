// given two sorted arrays we have to find intersection of them.
// i/p: arr1[] = {1, 2, 3, 4, 5}
//      arr2[] = {1, 2, 3}
// o/p: 1 2 3

// Naive Approach:
// time complexity: O(n*m)
// space complexity: O(1)
void intersection(int arr1[], int arr2[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i > 0 && arr1[i] == arr1[i - 1]) // to avoid printing dups
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

// Efficient Approach:
// time complexity: O(n+m)
// space complexity: O(1)
void intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && arr1[i] == arr1[i - 1]) // to avoid printing dups
        {
            i++;
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}
