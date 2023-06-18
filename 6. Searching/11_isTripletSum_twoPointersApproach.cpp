// Q2. Given a sorted array and a sum, find if there is a triplet with the given sum.
// i/p:- arr[] = {2, 3, 4, 8, 9, 20, 40};
//       sum = 32;
// o/p:- true

// a. Naive approach:- O(n^3) time complexity.
bool isTripletSum(int arr[], int n, int sum)
{
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                    return true;
            }
    return false;
}

// b. Effective approach:- O(n^2) time complexity.
// we will use the concept of two pointers.
bool isTripletSum(int arr[], int n, int sum)
{
    for (int i = 0; i < n - 2; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            if (arr[i] + arr[low] + arr[high] == sum)
                return true;
            else if (arr[i] + arr[low] + arr[high] > sum)
                high--;
            else
                low++;
        }
    }
    return false;
}

// note:-
// For triplet problem:-
// 1. if the array is sorted or unsorted then hashing is the best approach(same time complexity). but still use tow pointer coz less space complexity and easy to implement.
