// Tower of hanoi problem:-
// concept:-
// Move n-1 disks from source to helper
// Move nth disk from source to destination
// Move n-1 disks from helper to destination
// Time complexity:- O(2^n)
// Space complexity:- O(n)

#include <iostream>
using namespace std;

// n: number of disks
// src: source tower
// dest: destination tower
// helper: helper tower
void towerOfHanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, dest, src);
}
int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
