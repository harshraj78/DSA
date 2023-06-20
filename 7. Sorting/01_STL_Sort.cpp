// Sort is a general purpose sorting algorithm. It is a comparison based sorting algorithm. It is not a stable sort, which means that the relative order of equal sort items is not preserved.
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

// array example:-
// sort(arr, arr + n); // sort first n elements of array arr
// sort(arr, arr + n, greater<int>()); // sort first n elements of array arr in descending order

// vector example:-
// sort(v.begin(), v.end()); // sort all elements of vector v
// sort(v.begin(), v.end(), greater<int>()); // sort all elements of vector v in descending order

// deque example:-
// sort(d.begin(), d.end()); // sort all elements of deque d
// sort(d.begin(), d.end(), greater<int>()); // sort all elements of deque d in descending order

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // sort first n elements of array arr
    sort(arr, arr + n);

    // sort first n elements of array arr in descending order
    sort(arr, arr + n, greater<int>());

    vector<int> v = {5, 4, 3, 2, 1};

    // sort all elements of vector v
    sort(v.begin(), v.end());

    // sort all elements of vector v in descending order
    sort(v.begin(), v.end(), greater<int>());

    deque<int> d = {5, 4, 3, 2, 1};

    // sort all elements of deque d
    sort(d.begin(), d.end());

    // sort all elements of deque d in descending order
    sort(d.begin(), d.end(), greater<int>());

    return 0;
}
