// given 2 unsorted arrays, find the intersection of the 2 arrays (intersection means the common elements in the 2 arrays) output the count of the intersection elements
// ex: arr1[] = {10, 15, 20, 15, 30, 30, 5}
//     arr2[] = {30, 5, 30, 80}
// output: 2

// 1. Naive Approach:
//     - Time Complexity: O(m*(m+n))
//     - Space Complexity: O(1)
// explanation: we will traverse the first array and for each element we will check if it is present in the second array or not
//              if it is present then we will increment the count and skip it else we will skip it
int intersection(int arr1[], int arr2[], int m, int n)
{
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 0; j < i - 1; j++)
        {
            if (arr1[i] == arr1[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}

// 2. efficient approach:
//     - Time Complexity: O(m+n)
//     - Space Complexity: O(m)
// explanation: we will use a hash table to store the elements of the first array and then we will traverse the second array and for each element we will check if it is present in the hash table or not
int intersection(int arr1[], int arr2[], int m, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
        s.insert(arr1[i]);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr2[i]) != s.end())
        {
            res++;
            s.erase(arr2[i]);
        }
    }
    return res;
}