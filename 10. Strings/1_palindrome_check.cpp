// Given a string check if it is palindrome or not

// 1. Naive Approach:
//     - Reverse the string and check if it is equal to the original string
//     - Time Complexity: O(n)
//     - Space Complexity: O(n)
bool isPalindrome(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return rev == s;
}

// 2. Two Pointer Approach:
//     - Take two pointers, one at the start and one at the end
//     - Check if the characters at both the pointers are equal
//     - If not equal, return false
//     - If equal, increment the start pointer and decrement the end pointer
//     - Repeat till start < end
//     - Time Complexity: O(n)
//     - Space Complexity: O(1)
bool isPalindrome(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}