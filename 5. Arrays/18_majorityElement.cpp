// we are given an array of size n. we need to find out the index of majority element in the array.
// i/p:- arr[] = {8,7,6,8,6,6,6,6}
// o/p:- 2 or 4 or 5 or 6 or 7
// explanation:- 6 is the majority element in the array. so, index of 6 is 2 or 4 or 5 or 6 or 7.

// majority element is the element that occurs more than n/2 times in the array.

// 1. Naive Solution:-
// Time Complexity = O(n*n)
// Space Complexity = O(1)

int findMajorityElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return i;
        }
    }
    return -1;
}

// 2. Efficient Solution:- (Moore's Voting Algorithm)
// explanation:- we will use two variables res and count. res will store the index of the majority element and count will store the count of the majority element.
// we will traverse the array and check if the current element is equal to the element at index res. if yes, then we will increment count. else, we will decrement count.
// if count becomes 0, then we will update res with the current index and count will be set to 1.
// after the above process, we will check if the count of the element at index res is greater than n/2. if yes, then we will return res. else, we will return -1.
// Time Complexity = O(n)
// Space Complexity = O(1)

int findMajorityElement(int arr[], int n)
{
    int res = 0, count = 1;
    for (int i = 1; i < n; i++) 
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    } // finds a candidade
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= n / 2)
    {
        res = -1;
    } // checks if the candidate is actually a majority
    return res;
}
