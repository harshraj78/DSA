// duplicate element in an array of size n+1
// leetcode 287. Find the Duplicate Number
// https://leetcode.com/problems/find-the-duplicate-number/
// video explanataion:- https://youtu.be/wjYnzkAhcNk

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2

// Example 2:
// Input: nums = [3,1,3,4,2]
// Output: 3

int findDuplicate(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

// variation 1 : all the elements from 0 to max(nums)
// are present in the array
int findDuplicate(vector<int> &nums)
{
    int slow = nums[0] + 1, fast = nums[0] + 1;
    do
    {
        slow = nums[slow - 1] + 1;
        fast = nums[nums[fast - 1]] + 1;
    } while (slow != fast);
    slow = nums[0] + 1;
    while (slow != fast)
    {
        slow = nums[slow - 1] + 1;
        fast = nums[fast - 1] + 1;
    }
    return slow - 1;
}
