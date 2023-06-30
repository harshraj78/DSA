// Given a matrix print its transpose
// input: 1 2 3 4
//        5 6 7 8
//        9 10 11 12
//        13 14 15 16
// output: 1 5 9 13
//         2 6 10 14
//         3 7 11 15
//         4 8 12 16

// 1. Naive Solution:-  (using extra space) time complexity: O(n^2) auxiliary space: O(n^2)
void transpose(int arr[][100], int m, int n)
{
    int temp[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < n; j++)
        {
            temp[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < n; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }
}

// 2. Efficient Solution:- (in-place) time complexity: O(n^2) auxiliary space: O(1)
// idea: swap the elements of the matrix across the diagonal 
void transpose(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}


