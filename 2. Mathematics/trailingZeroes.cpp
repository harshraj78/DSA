//Trailing zeroes in factorial:-

#include <iostream>
using namespace std;

// 1. iterative Method:-
int trailingZeroes(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    int count = 0;
    while (fact % 10 == 0)
    {
        count++;
        fact = fact / 10;
    }
}
// 2. effective method:-
int trailingZeroes(int n)
{
    int count = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        count = count + n / i;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number of trailing zeroes in " << n << " is " << trailingZeroes(n) << endl;
    return 0;
}
