// Given two array, one is of size n and other is of size m. Find the maximum appearing element in the range l[i] to r[i] for every query.
// i/p:- l[] = {1, 2, 5, 15};
//       r[] = {5, 8, 7, 18};
// o/p:- 5
// explanation:- 5 is appearing most. 1st times in the range 1 to 5, 2nd times in the range 2 to 8, 3rd time in the range 5 to 7and not appearing in the range 15 to 18.
// 1-5 :- 1,2,3,4,5
// 2-8 :- 2,3,4,5,6,7,8
// 5-7 :- 5,6,7
// 15-18 :- 15,16,17,18

// prefix sum approach
// time complexity:- O(n + m)
// space complexity:- O(1)
int maxAppearing(int l[], int r[], int n, int m)
{
    int arr[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        arr[l[i]]++;     // Marks presence of l[i]
        arr[r[i] + 1]--; // logic is:- if l[i] = 1 and r[i] = 5 then we will mark 1 at 1st index and -1 at 6th index. so that when we will take prefix sum then at 1st index we will get 1 and at 6th index we will get 0. so that we can find the max appearing element.
    }
    int max = arr[0], res = 0;
    for (int i = 1; i < 1000; i++)
    {
        arr[i] += arr[i - 1]; // prefix sum
        if (max < arr[i])
        {
            max = arr[i]; // max appearing element
            res = i;      // index of max appearing element
        }
    }
    return res;
}
