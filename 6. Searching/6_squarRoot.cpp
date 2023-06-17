// find root if it is perfectly sqaure, otherwise return floor of the root.
// without using sqrt() function.

// 1. Naive approach:- O(sqrt(n))
int squareRoot(int n)
{
    int i = 1;
    while (i * i <= n)
        i++;
    return i - 1;
}

// 2. (similar to binary search) :- O(logn)
int squareRoot(int n)
{
    int low = 1, high = n, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midSq = mid * mid;
        if (midSq == n)
            return mid;
        else if (midSq > n)
            high = mid - 1;
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
