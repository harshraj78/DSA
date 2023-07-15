// we are given two unsorted array and we have to find the union of the two array (union means the elements present in either of the array) output the count of the union elements
// ex: arr1[] = {10, 15, 20, 15, 30, 30, 5}
//     arr2[] = {30, 5, 30, 80}
// output: 5
// explanation: 10, 15, 20, 30, 5 are the union elements

// 1. Naive Approach:
//     - Time Complexity: O((m+n)*(m+n))
//     - Space Complexity: O(m+n)
// explanation: we will traverse the first array and for each element we will check if it is present in the second array or not
//              if it is present then we will increment the count and skip it else we will skip it
int union(int arr1[], int arr2[], int m, int n)
{
    int temp[m + n];
    for (int i = 0; i < m; i++)
        temp[i] = arr1[i];
    for (int i = 0; i < n; i++)
        temp[m + i] = arr2[i];
    int res = 0;
    for (int i = 0; i < m + n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (temp[i] == temp[j])
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
//     - Time Complexity: O(m+n)
//     - Space Complexity: O(m+n)
// explanation: we will use a hash table to store the elements of the first array and then we will traverse the second array and for each element we will check if it is present in the hash table or not
int union(int arr1[], int arr2[], int m, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
        s.insert(arr1[i]);
    for (int i = 0; i < n; i++)
        s.insert(arr2[i]);
    return s.size();
}