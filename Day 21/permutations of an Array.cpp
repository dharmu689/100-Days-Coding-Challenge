// Question - https://www.hackerrank.com/contests/day-21-recap/challenges/permutations-of-an-array/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << nums[i];
            if (i != n - 1)
                cout << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));

    return 0;
}
