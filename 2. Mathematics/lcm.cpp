/* as we know:-

(a*b) = LCM(a,b) * GCD(a,b)
then,
LCM(a,b) = (a*b) / GCD(a,b)

*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); // Euclidean Algorithm
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
