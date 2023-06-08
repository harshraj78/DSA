// Tail recursion is defined as a recursive function in which the recursive call is the last statement that is executed by the function.So basically nothing is left to execute after the recursion call.
// Tail recursion is similar to a loop, and the same set of problems can be solved by both of them. But, the recursive solution is usually more elegant and easy to understand.
// Tail recursion is also useful when the compiler optimizes the code to avoid stack overflow error.

#include <iostream>
using namespace std;

// Example: print 1 to n using tail recursion
int k = 1;
void fun(int n, int k)
{
    if (n == 0)
        return;
    cout << k << " ";
    fun(n - 1, k + 1);
}

// Example 2: factorial using tail recursion
int t = 1;
int fact(int n, int t)
{
    if (n == 0)
        return t;
    return fact(n - 1, t * n);
}
