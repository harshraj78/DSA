// given an array find the frequency of each element in the array
// ex: arr[] = {10, 20, 10, 30, 30, 20}
// output: 10->2, 20->2, 30->2

// 1. Naive Approach:
//     - Time Complexity: O(n*n)
//     - Space Complexity: O(1)
// expalnation: we will traverse the array and for each element we will check if it is already present in the array or not
//              if it is present then we will skip it else we will count the frequency of that element

void printFreq(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++) // this loop is used to check if the element is already present in the array or not
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false) // if the element is not present in the array then we will count its frequency
        {
            int freq = 1;
            for (int j = i + 1; j < n; j++) // this loop is used to count the frequency of the element if not seen before
            {
                if (arr[i] == arr[j])
                    freq++;
            }
            cout << arr[i] << "->" << freq << endl;
        }
    }
}

// 2. efficient approach:
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
// expalnation: we will use a hash table to store the frequency of each element in the array
int countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    for (auto x : mp)
        cout << x.first << "->" << x.second << endl;
}