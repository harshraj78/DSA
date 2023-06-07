// Given an array of n number that has values in range [1, n+1]. Every number even number of time. Hence, two are appear odd number of times. Find the two odd occurring numbers.
// I/P:- [3, 4, 3, 4, 8, 4, 4, 32, 7, 7]
// O/P:- 8, 32
// I/P:- [4, 4, 100, 5000, 4, 4, 4, 4, 100, 100]
// O/P:- 100, 5000

#include <iostream>
using namespace std;

// solution:- Naive Solution:- θ(n*n)
void twoOddOccuring(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count % 2 != 0)
            cout << arr[i] << " ";
    }
}

// solution:- XOR Solution:- θ(n) and θ(1) space
void twoOddOccuring(int arr[], int n)
{
    int res = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    int sn = res & ~(res - 1);
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & sn) != 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }
    cout << res1 << " " << res2 << endl;
}
