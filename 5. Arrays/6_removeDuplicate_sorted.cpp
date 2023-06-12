// Remove the Duplicates from the given array, and return the count of the reamining elements.
// I/P:- arr[] = {10, 20, 20, 30, 30, 30};
// O/P:- 3 // 10, 20, 30

#include <iostream>
using namespace std;

// 1. Naive Solution:-
//  Time Complexity = O(n)
//  Space Complexity = O(n)
int removeDuplicates(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }
    return res;
}

// 2. Efficient Solution:-
//  Time Complexity = O(n)
//  Space Complexity = O(1)
int removeDuplicates(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
