// given a matrix print it in spiral form
// input: 1 2 3 4
//        5 6 7 8
//        9 10 11 12
//        13 14 15 16
// output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

void printSpiral(int arr[][100], int m, int n)
{
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++) // print top row
        {
            cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) // print right column
        {
            cout << arr[i][right] << " ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--) // print bottom row
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--) // print left column
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}
