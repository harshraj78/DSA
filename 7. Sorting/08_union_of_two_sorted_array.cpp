// given two sorted arrays we have to find union of them.
// i/p: arr1[] = {1, 2, 3, 4, 5}
//      arr2[] = {1, 2, 3}
// o/p: 1 2 3 4 5

// Naive Approach:
// time complexity: O((m+n)log(m+n))
// space complexity: O(m+n)
void union(int arr1[], int arr2[], int m, int n)
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
} // this is same as merge function of merge sort

// Efficient Approach:
// time complexity: O(m+n)
// space complexity: O(1)
void union(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && arr1[i] == arr1[i - 1]) // to avoid printing dups
        {
            i++;
            continue;
        }
        if (j > 0 && arr2[j] == arr2[j - 1]) // to avoid printing dups
        {
            j++;
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    while (i < m)
    {
        if (i > 0 && arr1[i] == arr1[i - 1]) // to avoid printing dups
        {
            i++;
            continue;
        }
        cout << arr1[i] << " ";
        i++;
    }
    while (j < n)
    {
        if (j > 0 && arr2[j] == arr2[j - 1]) // to avoid printing dups
        {
            j++;
            continue;
        }
        cout << arr2[j] << " ";
        j++;
    }
} // this is same as merge function of merge sort
