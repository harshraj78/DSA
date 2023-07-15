// given an array of size n and an integer k, we have to find all the elements in the array that appear more than n/k times
// ex: arr[] = {3, 1, 2, 2, 1, 2, 3, 3}
//     k = 4
// output: 2, 3
// explanation: 2 and 3 are the only elements that appear more than n/k times

// 1. Naive Approach:
//     - Time Complexity: O(nlogn)
//     - Space Complexity: O(1)
// explanation: we will sort the array and then we will traverse the array and for each element we will check if the next element is same or not
void printNByK(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            curr++;
        else
        {
            if (curr > n / k)
                cout << arr[i - 1] << " ";
            curr = 1;
        }
    }
    if (curr > n / k)
        cout << arr[n - 1] << " ";
}

// 2. efficient approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
// explanation: we will use a hash table to store the elements of the array and then we will traverse the array and for each element we will check if the previous element is present in the hash table or not
void printNByK(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    for (auto x : m)
        if (x.second > n / k)
            cout << x.first << " ";
}

// 3. efficient approach:
//     - Time Complexity: O(nk)
//     - Space Complexity: O(k)
// explanation: we will use a hash table to store the elements of the array and then we will traverse the array and for each element we will check if the previous element is present in the hash table or not
// using moore's voting algorithm
void printNByK(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (auto x : m)
        {
            if (x.first == arr[i])
            {
                m[x.first]++;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            if (m.size() < k - 1)
                m[arr[i]] = 1;
            else
            {
                for (auto x : m)
                    m[x.first]--;
            }
        }
    }
    for (auto x : m)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] == x.first)
                count++;
        if (count > n / k)
            cout << x.first << " ";
    }
}