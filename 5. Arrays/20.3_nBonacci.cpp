// Find N-bonacci Numbers, given N and M.
// N-bonacci Numbers are the numbers which are sum of previous N numbers.
// i/p:- N = 3, M = 10
// o/p:- 0 0 1 1 2 4 7 13 24 44

#include <iostream>
#include <vector>

using namespace std;

vector<int> findNBonacci(int N, int M)
{
    vector<int> nbonacci(M);

    // Handle the special cases where N is 1 or 2
    if (N == 1)
    {
        nbonacci[0] = 0;
    }
    else if (N == 2)
    {
        nbonacci[0] = 0;
        nbonacci[1] = 1;
    }
    else
    {
        nbonacci[0] = 0;
        nbonacci[1] = 0;
        nbonacci[N - 1] = 1;

        int sum = 1;
        for (int i = N; i < M; i++)
        {
            nbonacci[i] = sum;
            sum = sum * 2 - nbonacci[i - N];
        }
    }

    return nbonacci;
}

int main()
{
    int N = 3;
    int M = 10;

    vector<int> nbonacci = findNBonacci(N, M);

    cout << "N-bonacci Numbers:";
    for (int i = 0; i < M; i++)
    {
        cout << " " << nbonacci[i];
    }
    cout << endl;

    return 0;
}
