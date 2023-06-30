// given a matrix, print the boundary elements
// input: 1 2 3
//        4 5 6
//        7 8 9
// output: 1 2 3 6 9 8 7 4

void printBoundaryElements(int arr[][100], int m, int n)
{
    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[0][i] << " ";
        }
    }
    else if (n == 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][0] << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[0][i] << " ";
        }
        for (int i = 1; i < m; i++)
        {
            cout << arr[i][n - 1] << " ";
        }
        for (int i = n - 2; i >= 0; i--)
        {
            cout << arr[m - 1][i] << " ";
        }
        for (int i = m - 2; i >= 1; i--)
        {
            cout << arr[i][0] << " ";
        }
    }
}
