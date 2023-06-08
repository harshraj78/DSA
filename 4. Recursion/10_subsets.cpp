#include <iostream>
using namespace std;

void subSets(string &s, string curr = "", int i)
{
    if (i == s.length())
    {
        cout << curr << endl;
        return;
    }
    subSets(s, curr, i + 1);
    subSets(s, curr + s[i], i + 1);
}

int main()
{
    string s;
    cin >> s;
    subSets(s);
    return 0;
}
