// Given an array of n number that has values in range [1, n+1]. Every number appears exactly once. Hence, one number is missing. Find the missing number.
// I/P : [1, 2, 3, 5]
// O/P : 4
// I/P : [1, 2, 3, 4, 5, 6, 7, 8, 10]
// O/P : 9

// solution:- XOR Solution:- θ(n) and θ(1) space
int missingNumber(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    for (int i = 1; i <= n + 1; i++)
    {
        res = res ^ i;
    }
    return res;
}
