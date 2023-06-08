#include <iostream>
using namespace std;
int getSum(int n)
{
    if (n == 0)
        return 0;
    return n + getSum(n - 1);
}

// recursion tree
//  getSum(5)
//  5 + getSum(4)
//  5 + 4 + getSum(3)
//  5 + 4 + 3 + getSum(2)
//  5 + 4 + 3 + 2 + getSum(1)
//  5 + 4 + 3 + 2 + 1 + getSum(0)
//  5 + 4 + 3 + 2 + 1 + 0 = 15
