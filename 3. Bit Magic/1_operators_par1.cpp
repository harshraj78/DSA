// there are total 6 bit-wise operators in c++
// 1. & (bitwise AND)
// 2. | (bitwise OR)
// 3. ^ (bitwise XOR)
// 4. ~ (bitwise NOT)
// 5. << (left shift)
// 6. >> (right shift)

// part1: (bitwise AND,OR,XOR) operators

#include <iostream>
using namespace std;

int main()
{
    int x = 3, y = 6;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "x & y = " << (x & y) << endl;
    cout << "x | y = " << (x | y) << endl;
    cout << "x ^ y = " << (x ^ y) << endl;
}