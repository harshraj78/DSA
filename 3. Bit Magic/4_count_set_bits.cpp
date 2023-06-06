#include <iostream>
using namespace std;

// 1. Naive Solution:- θ(total bits in n)
int countSetBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
            res++;
        n = n / 2;
    }
    return res;
}

// 2. Brian Kernighan’s Algorithm:- θ(total set bits in n)
int countSetBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}

// 3. Lookup Table Method:- θ(1)
int table[256];
void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}
int countSetBits(int n)
{
    int res = table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    return res;
}
