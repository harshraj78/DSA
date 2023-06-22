// given an array count the number of inversions in it.
// inversion means if i<j and arr[i]>arr[j] then it is an inversion.
// i/p: arr[] = {2, 4, 1, 3, 5}
// o/p: 3
// explanation: (2, 1), (4, 1), (4, 3)

// Naive Approach:
// time complexity: O(n^2)
// space complexity: O(1)
int countInversions(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                res++;
            }
        }
    }
    return res;
}

// Efficient Approach:
// time complexity: O(nlogn)
// space complexity: O(n)
int countAndMerge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[m + 1 + i];
    }
    int res = 0, i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            res += (n1 - i);
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }
    return res;
}

int countInversions(int arr[], int l, int r)
{
    int res = 0;
    if (l < r)
    {
        int m = (l + (r - l) / 2);
        res += countInversions(arr, l, m);
        res += countInversions(arr, m + 1, r);
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}

int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countInversions(arr, n);
    return 0;
}
