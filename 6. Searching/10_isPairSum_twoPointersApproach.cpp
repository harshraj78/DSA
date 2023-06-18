// Q1. Given a sorted array and a sum, find if there is a pair with the given sum.
// i/p:- arr[] = {2, 3, 7, 8, 11};
//       sum = 14;
// o/p:- true

// a. Naive approach:- O(n^2) time complexity.
bool isPairSum(int arr[], int n, int sum)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
                return true;
        }
    return false;
}

// Two Pointers Approach
// theory:- In this approach, two pointers are used to check for the sum of the elements which is equal to the target sum. The array must be sorted for this approach to work. The two pointers are initialized to point to the first and the last element of the array respectively, and then they are incremented or decremented in order to find the sum equal to the target sum. If the sum is greater than the target sum, then the right pointer is decremented, else if the sum is less than the target sum, then the left pointer is incremented.

// b. Effective approach:- O(n) time complexity.
bool isPairSum(int arr[], int n, int sum)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
            return true;
        else if (arr[low] + arr[high] > sum)
            high--;
        else
            low++;
    }
    return false;
}

// note:- 
// For pair problem:-
// 1. if the array is not sorted then hashing is the best approach.
// 2. if the array is sorted then two pointer approach is the best approach.
