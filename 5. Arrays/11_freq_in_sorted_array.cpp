// we are given a Sorted Array and we have to find the frequency of a given element in the array

// i/p: arr[] = {10, 20, 20, 20, 40, 40}
// 10 1
// 20 3
// 40 2

// i/p: arr[] = {10, 10, 10}
// 10 3

// i/p: arr[] = {10, 20, 30}
// 10 1
// 20 1
// 30 1

#include <iostream>
using namespace std;

void printFreq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << " " << 1 << endl;
    }
}
