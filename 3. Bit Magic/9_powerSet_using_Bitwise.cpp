// I/P:- s="abc"
// O/P:- "", "a", "b", "c", "ab", "ac", "bc", "abc"

#include <bits/stdc++.h>
using namespace std;

void printPowerSet(string s)
{
    int n = s.length();
    int powSize = pow(2, n); // powSize = 2^n

    for (int counter = 0; counter < powSize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((counter & (1 << j)) != 0) // if jth bit is set in counter then print jth element from set s
                cout << s[j];
        }
        cout << endl;
    }
}
