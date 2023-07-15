// we are given an unsorted array and a sum, we have to find if there is a pair of elements whose sum is equal to given sum
// ex: arr[] = {3, 2, 8, 15, -8}
//     sum = 17
// output: yes
// explanation: 2 + 15 = 17

// 1. Naive Approach:
//     - Time Complexity: O(n*n)
//     - Space Complexity: O(1)
// explanation: we will traverse the array and for each element we will check if there is any other element whose sum is equal to the given sum
bool isPair(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int temp = sum - arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == temp)
                return true;
        }
    }
    return false;
}

// 2. sorting approach:
//     - Time Complexity: O(nlogn)
//     - Space Complexity: O(1)
// explanation: we will sort the array and then we will use two pointer approach to find the pair
bool isPair(int arr[], int n, int sum)
{
    sort(arr, arr + n);
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
            return true;
        else if (arr[low] + arr[high] < sum)
            low++;
        else
            high--;
    }
    return false;
}

// 3. hashing approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
// explanation: we will use a hash table to store the elements of the array and then we will traverse the array and for each element we will check if the sum - arr[i] is present in the hash table or not
bool isPair(int arr[], int n, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(sum - arr[i]) != s.end())
            return true;
        s.insert(arr[i]);
    }
    return false;
}