// we are given a binary array. we need to make all the elements of the array same by flipping at most one consecitive sub-array of either 0 or 1. print flips from where to where.
// i/p:- arr[] = {0,0,1,1,0,0,1,1,0}
// o/p:- from 2 to 3
//       from 6 to 7

// i/p:- arr[] = {0,0,1,1,1,1,1,1,0}
// o/p:- from 2 to 7

// i/p:- arr[] = {0,0,1,1,0,0,1,1,1}
// o/p:- from 2 to 3
//       from 6 to 8


// 1. Efficient Solution:-
// Explanation:- we will traverse the array and selecting 2nd group of 0's and 1's and print the starting and ending index of the group. why 2nd group? because we have to flip at most one group. if we select 1st group then we have to flip 2 groups.
// Time Complexity = O(n)
// Space Complexity = O(1)

void printGroups(bool arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "from " << i << " to ";
            }
            else
            {
                cout << i - 1 << endl;
            }
        }
    }
    if (arr[n - 1] != arr[0])
    {
        cout << n - 1 << endl;
    }
}

// dry run:-
// i/p:- arr[] = {0,0,1,1,0,0,1,1,0}
// o/p:- from 2 to 3
//       from 6 to 7
