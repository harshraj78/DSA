// part2:-

// left shift operator (<<)
// right shift operator (>>)
// bitwsie not operator (~)

#include <iostream>
using namespace std;

int main()
{
    // left shift operator (<<)
    int x = 3;
    cout << "x = " << x << endl;
    cout << "x << 1 = " << (x << 1) << endl;
    cout << "x << 2 = " << (x << 2) << endl;
    int y = 4;
    int z = x << y;
    cout << z;

    // right shift operator (>>)
    int a = 33;
    cout << "a = " << a << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;
    cout << "a >> 2 = " << (a >> 2) << endl;
    int y = 4;
    int z = a >> y;
    cout << z;

    // bitwise not operator (~)
    unsigned int x = 1;
    cout << "x = " << x << endl;
    cout << "~x = " << (~x) << endl;
    unsigned int y = 5;
    cout << "y = " << y << endl;
    cout << "~y = " << (~y) << endl;

    return 0;
}
