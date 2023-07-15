// we are given an array and we have to find the count of distinct element in the array
// ex: arr[] = {10, 20, 10, 30, 30, 20}
// output: 3
// explanation: 10, 20, 30 are the distinct element in the array

// 1. Naive Approach:
//     - Time Complexity: O(n*n)
//     - Space Complexity: O(1)
int countDistinct(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            res++;
    }
    return res;
}

// 2. efficient approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    return s.size();
}

// 3. efficient approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
int countDistinct(int arr[], int n)
{
    unordered_set<int> s(arr, arr + n);
    return s.size();
}