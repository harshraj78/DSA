#include <iostream>
using namespace std;

// 1. Naive method:- O(min(a,b)) time complexity
int GCD(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
    return res;
}

// 2. Euclidean Algorithm:- O(log(min(a,b))) time complexity
int GCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

// 3. recursive method :- O(log(min(a,b))) time complexity
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
