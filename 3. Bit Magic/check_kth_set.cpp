// check if kth bit is set or not
#include <iostream>
using namespace std;

// 1. left shift 1 by k-1 to create a number that has only set bit as kth bit.
// and it with n, if result is 0 then kth bit is not set else it is set.

void check_kth_set(int n, int k)
{
    if (n & (1 << (k - 1)))
        cout << "Yes";
    else
        cout << "No";
}

// 2. right shift n by k-1 and and it with 1, if result is 0 then kth bit is not set else it is set.

void check_kth_set(int n, int k)
{
    if ((n >> (k - 1)) & 1)
        cout << "Yes";
    else
        cout << "No";
}
