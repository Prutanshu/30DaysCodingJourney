// 30 Days of Code Camp
// Day 4: First Missing Positive
// Author: Rutanshu Patel
// Problem: Given an unsorted integer array nums, return the smallest missing positive integer.
//          You must implement an algorithm that runs in O(n) time and uses constant extra space.
// Date: July 12, 2025

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> n;

        for (int num : nums) {
            if (num > 0) {
                n.insert(num);
            }
        }

        vector<int> r(n.begin(), n.end());
        sort(r.begin(), r.end());

        for (int i = 1; i <= r.size(); i++) {
            if (r[i - 1] != i) {
                return i;
            }
        }

        return r.empty() ? 1 : r.back() + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int m;
    for(int i=0;i<m;i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int result = sol.firstMissingPositive(nums);
    cout << "First missing positive integer: " << result << endl;

    return 0;
}
