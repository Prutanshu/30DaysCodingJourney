// 30 Days of Code Camp
// Day 2: Reverse String
// Author: Rutanshu Patel
// Problem: Write a function that reverses a string
// Date: July 10, 2025

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end()); // In-place reverse using STL
    }
};

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    cout << "Original string: ";
    for (char c : s) cout << c;
    cout << endl;

    sol.reverseString(s);

    cout << "Reversed string: ";
    for (char c : s) cout << c;
    cout << endl;

    return 0;
}
