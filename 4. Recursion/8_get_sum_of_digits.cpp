#include <iostream>
using namespace std;

int getSOD(int n)
{
    if (n <= n)
    {
        return n;
    }
    return n % 10 + getSOD(n / 10);
}
int main()
{
    int n = 12345;
    cout << getSOD(n);
    return 0;
}
