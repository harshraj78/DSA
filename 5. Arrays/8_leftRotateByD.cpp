// method 1:- Naive Solution
// Time Complexity = O(n*n)
// Space Complexity = O(1)

void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
void leftRotate(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        leftRotateByOne(arr, n);
    }
}

// method 2:- Efficient Solution
// Time Complexity = O(n)
// Space Complexity = O(d)

void leftRotate(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

// method 3:- Efficient Solution
// Time Complexity = O(n)
// Space Complexity = O(1)

void leftRotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
