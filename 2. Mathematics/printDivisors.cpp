#include <iostream>
using namespace std;

// 1. Naive method:- O(n) time complexity O(1) auxiliary space
void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}

// 2. Efficient method:- O(sqrt(n)) time complexity O(1) auxiliary space
void printDivisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
                cout << n / i << " ";
        }
    }
}

// 3. Efficient method:- O(sqrt(n)) time complexity O(1) auxiliary space
void printDivisors(int n)
{
    int i;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << n / i << " ";
    }
}
