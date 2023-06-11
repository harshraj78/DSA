// For a String of length n there are n! permutations and it takes O(n) time to print a permutation.
// So time complexity is O(n*n!)
// Space complexity is O(n) for recursive stack

// example: ABC
// ABC, ACB, BAC, BCA, CAB, CBA

#include <iostream>
#include <string>
using namespace std;

void permute(string s, int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << endl;
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        // swap the current character with the first character
        swap(s[i], s[j]);
        // recur for the remaining string (except the first character)
        permute(s, i + 1);
        // backtrack (restore the string to its original state)
        swap(s[i], s[j]);
    }
}
