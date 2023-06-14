// we have given an array and we have to find the leaders in the array
// leader is an element which is greater than all the elements to its right

// I/P:- arr[] = {7, 10, 4, 3, 6, 5, 2};
// O/P:- 10, 6, 5, 2

// I/P:- arr[] = {10, 20, 30};
// O/P:- 30

// I/P:- arr[] = {30, 20, 10};
// O/P:- 30, 20, 10

// 1. Naive Solution:-
//  Time Complexity = O(n*n)
//  Aux Space Complexity = O(1)

void leadersInArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << arr[i] << " ";
        }
    }
}

// 2. Efficient Solution:-
//  Time Complexity = O(n)
//  Aux Space Complexity = O(1)

void leadersInArray(int arr[], int n)
{
    int curr_leader = arr[n - 1];
    cout << curr_leader << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_leader < arr[i])
        {
            curr_leader = arr[i];
            cout << curr_leader << " ";
        }
    }
    // this will print the leaders in reverse order
    // if we want to print the leaders in the same order then we have to store the leaders in a vector and then print the vector in reverse order
    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        if (curr_leader < arr[i])
        {
            curr_leader = arr[i];
            v.push_back(curr_leader);
        }
    }
}
