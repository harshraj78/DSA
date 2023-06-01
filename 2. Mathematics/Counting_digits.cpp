#include <iostream>
#include <cmath>
using namespace std;

// 1. iterative Method:-
int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number of digits in " << n << " is " << countDigits(n) << endl;
    return 0;
}

// 2. Recursive Solution :-
int countDigits(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

// 3. Logarithmic Solution :-
int countDigits(int n)
{
    return floor(log10(n) + 1);
}