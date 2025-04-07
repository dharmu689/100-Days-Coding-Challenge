// Question - https://www.hackerrank.com/contests/day-16-functions-iii/challenges/2-sum-12-2

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end())
        {
            return {numMap[complement], i}; // Return indices of the two numbers
        }
        numMap[nums[i]] = i; // Store index of current number
    }

    return {}; // Should never reach here (guaranteed one solution)
}

int main()
{
    int n, target;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cin >> target;

    vector<int> result = twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl; // Print indices

    return 0;
}
