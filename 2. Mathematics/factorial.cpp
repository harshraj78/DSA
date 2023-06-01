#include <iostream>
using namespace std;

// 1.recursive method:-
int Factorial(int n)
{
    if (n == 0)
        return 1;
    return n * Factorial(n - 1);
}

// 2.iterative method:-
int Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The factorial of " << n << " is " << Factorial(n) << endl;
    return 0;
}
