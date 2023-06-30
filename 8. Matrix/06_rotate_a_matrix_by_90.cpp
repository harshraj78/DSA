// given a matrix rotate it by 90 degrees
// input: 1 2 3
//        4 5 6
//        7 8 9
// output: 3 6 9
//         2 5 8
//         1 4 7

// 1. Naive Solution:- (using extra space) time complexity: O(n^2) auxiliary space: O(n^2)
void rotateMatrix(int arr[][100], int m, int n)
{
    int temp[n][m]; // Create a temporary matrix with dimensions swapped
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) // Corrected the condition for j
        {
            temp[j][m - i - 1] = arr[i][j]; // Rotate the matrix by 90 degrees in clockwise direction
        }
    }
    for (int i = 0; i < n; i++) // Updated loop condition to n (number of columns)
    {
        for (int j = 0; j < m; j++) // Updated loop condition to m (number of rows)
        {
            arr[i][j] = temp[i][j]; // Copy elements from temporary matrix back to original matrix
        }
    }
}


// 2. Efficient Solution:- (in-place) time complexity: O(n^2) auxiliary space: O(1)
// idea: first transpose the matrix and then reverse each row
void rotateMatrix(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            swap(arr[i][j], arr[j][i]); // transpose the matrix
        }
    }
    for (int i = 0; i < m; i++)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            swap(arr[i][low], arr[i][high]); // reverse each row  
            low++;
            high--;
        }
    }
}
