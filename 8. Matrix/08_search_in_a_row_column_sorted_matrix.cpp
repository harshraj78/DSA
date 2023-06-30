// given a row and column wise sorted matrix and a key, find the position of the key in the matrix
// input: 10 20 30 40
//        15 25 35 45
//        27 29 37 48
//        32 33 39 50
//        key = 29
// output: Found at (2, 1)

// 1. Naive Solution:- O(R * C)time complexity
void searchMatrix(int arr[][100], int m, int n, int key)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if (arr[i][j] == key)
            {
                cout << "Found at (" << i << ", " << j << ")";
                return;
            }
        }
    }
    cout << "Not Found";
}

// 2. Efficient Solution:- O(R + C)time complexity
void searchMatrix(int arr[][100], int m, int n, int key)
{
    int i = 0, j = n - 1;
    while (i < m && j >= 0)
    {
        if (arr[i][j] == key)
        {
            cout << "Found at (" << i << ", " << j << ")";
            return;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "Not Found";
}
