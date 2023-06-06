#include <iostream>
using namespace std;

// 1. Naive Solution:- θ(n^2)
int findOdd(int arr[], int n)
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
            return arr[i];
    }
}

// 2. XOR Solution:- θ(n) and θ(1) space
int findOdd(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}
