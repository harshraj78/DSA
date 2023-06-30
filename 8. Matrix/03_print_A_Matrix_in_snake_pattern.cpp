// given a matrix print it in snake pattern
// input: 1 2 3
//        4 5 6
//        7 8 9
// output: 1 2 3 6 5 4 7 8 9

void printSnakePattern(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
