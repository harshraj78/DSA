// 1. Double pointer method:-
#include <iostream>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int **arr;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 10;
            cout << arr[i][j] << " ";
        }
    }
}

// 2. Single pointer method:-
#include <iostream>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int *arr[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 10;
            cout << arr[i][j] << " ";
        }
    }
}

// 3. Using vector:-
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 3, n = 2;
    vector<vector<int>> arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(10);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

// 4. vector of vector:-
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 3, n = 2;
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(10);
        }
        arr.push_back(v);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}