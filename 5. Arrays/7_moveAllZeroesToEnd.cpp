// Move all zeroes to the end of the array without changing the order of non-zero elements.

// I/P:- arr[] = {8, 5, 0, 10, 0, 20};
// O/P:- arr[] = {8, 5, 10, 20, 0, 0};

// I/P:- arr[] = {0, 0, 0, 10, 0};
// O/P:- arr[] = {10, 0, 0, 0, 0};

#include <iostream>
using namespace std;

// 1. Naive Solution:-
//  Time Complexity = O(n*n)
//  Aux Space Complexity = O(1)

int moveAllZeroesToEnd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }
}

// 2. Efficient Solution:-
//  Time Complexity = O(n)
//  Aux Space Complexity = O(1)

int moveAllZeroesToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
