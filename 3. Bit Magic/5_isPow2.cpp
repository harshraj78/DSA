// check if a number is power of 2 or not

#include <iostream>
using namespace std;

// 1. Naive Solution:- θ(logn)
bool isPow2(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}

// 2. Brian Kernighan’s Algorithm:- θ(set bits in n)
bool isPow2(int n)
{
    if (n == 0)
        return false;
    return ((n & (n - 1)) == 0);
}

