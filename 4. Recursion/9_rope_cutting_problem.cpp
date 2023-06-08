// Given a rope of length n, you need to find the maximum number of pieces
// you can make such that the length of every piece is in set { a, b, c } for
// the given three values a, b, c

// Solution:
// We can solve this problem using recursion. We will make a recursive call
// for every possible cut. We will make a cut of length a and recursively call
// for n-a, similarly for b and c. We will return the maximum of these three
// values. The base case will be when n becomes 0, we will return 0.

// handling the corner cases:
// 1. If n becomes negative, we will return -1.
// 2. If n is not divisible by any of a, b, c, we will return -1.

//Time Complexity: O(3^n):-
// For every call, we are making three recursive calls. So, the time complexity
// will be O(3^n).

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int maxPieces(int n, int a, int b, int c)
{
    if (n == 0) return 0;
    if (n < 0) return -1;
    int res = max(max(maxPieces(n - a, a, b, c), maxPieces(n - b, a, b, c)), maxPieces(n - c, a, b, c));
    if (res == -1)
        return -1;
    return res + 1;
}
int main()
{
    int n = 5, a = 2, b = 5, c = 1;
    maxPieces(n, a, b, c);
    return 0;
}
