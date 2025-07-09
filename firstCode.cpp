// Day 1: Contains Duplicate
// 30 Days of Code Camp
// Author: Rutanshu Patel
// Problem: Given an integer array, return true if any value appears at least twice in the
// Date: July 9, 2025

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.count(num))
            {
                return true; // Duplicate found
            }
            seen.insert(num);
        }
        return false; // No duplicates
    }
};

int main()
{
    Solution sol;

    // Test case 1: No duplicates
    vector<int> nums1 = {1, 2, 3, 4};
    cout << "Test Case 1: ";
    cout << (sol.containsDuplicate(nums1) ? "Duplicate Found" : "No Duplicates") << endl;

    // Test case 2: Has duplicates
    vector<int> nums2 = {1, 2, 3, 1};
    cout << "Test Case 2: ";
    cout << (sol.containsDuplicate(nums2) ? "Duplicate Found" : "No Duplicates") << endl;

    return 0;
}
