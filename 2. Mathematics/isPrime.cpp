#include <iostream>
using namespace std;

// time complexity:- O(n^1/2)
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++) // or i <= sqrt(n)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// more efficient method for large value of n:- O(n^1/2)
bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
