// Given a Array of size n having 0,1 as element, find the maximum consecutive 1's in the array.
// i/p:- arr[] = {0,1,1,0,1,1,1,0,1,1}
// o/p:- 3
// i/p:- arr[] = {1,1,1,1,1,1,1,1,1,1}
// o/p:- 10

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)
int maxConsecutiveones(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                curr++;
            }
            else
            {
                break;
            }
        }
        res = max(res, curr);
    }
    return res;
}

// 2. Efficient Solution:-
// Time Complexity = O(n)
// Space Complexity = O(1)
int maxConsecutiveones(int arr[], int n)
{
    int res = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(res, curr);
        }
    }
    return res;
}
