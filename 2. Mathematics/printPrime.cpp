#include <stdc++.h>
using namespace std;

// For Printing Prime Numbers upto n

// 1. Sieve of Eratosthenes:- O(n*log(log(n))) time complexity O(n) auxiliary space
void printPrime(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j <= n; j = j + i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            cout << i << " ";
    }
}

// optimized sieve of eratosthenes
//  2. Sieve of Eratosthenes:- O(n*log(log(n))) time complexity O(n) auxiliary space
void printPrime(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= n; j = j + i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            cout << i << " ";
    }
}

// optimized sieve of eratosthenes
//  3. Sieve of Eratosthenes:- O(n*log(log(n))) time complexity O(n) auxiliary space
void printPrime(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
                isPrime[j] = false;
        }
    }
}
