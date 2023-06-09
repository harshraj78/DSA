#include <iostream>
using namespace std;

// Time complexity:- O(2^n)
// Space complexity:- O(n)
// concept:-
// for every character we have two choices either to include it or not
// if we include it then we have to call the function for the next character
// if we don't include it then we have to call the function for the next character
// base case:- if we reach the end of the string then print the current string

void subSets(string &s, string curr = "", int i)
{
    if (i == s.length())
    {
        cout << curr << endl;
        return;
    }
    subSets(s, curr, i + 1);
    // we are not including the current character
    subSets(s, curr + s[i], i + 1);
    // we are including the current character
}

int main()
{
    string s;
    cin >> s;
    subSets(s);
    return 0;
}
