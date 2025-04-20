//Question - https://www.hackerrank.com/contests/day-24access-modifiers/challenges/remove-duplicates-from-sorted-array-28-4/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Edge case for 0 or 1 element
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int i = 0;  // Points to the last unique element
    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];  // Move unique element to the next position
        }
    }

    // Output the number of unique elements
    cout << i + 1 << endl;
    
    // Output the unique elements
    for (int k = 0; k <= i; k++) {
        cout << nums[k] << " ";
    }
    cout << endl;

    return 0;
}

