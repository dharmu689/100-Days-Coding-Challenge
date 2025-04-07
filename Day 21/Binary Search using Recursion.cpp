// Question - https://www.hackerrank.com/contests/day-21-recap/challenges/binary-search-using-recursion-2

#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int> &nums, int left, int right, int target)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (nums[mid] == target)
        return mid;
    else if (nums[mid] > target)
        return binarySearch(nums, left, mid - 1, target);
    else
        return binarySearch(nums, mid + 1, right, target);
}

int main()
{
    int n, target;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cin >> target;

    int index = binarySearch(nums, 0, n - 1, target);
    cout << index << endl;

    return 0;
}
