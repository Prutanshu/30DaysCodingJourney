// 30 Days of Code Camp
// Day 3: Multiply Strings
// Author: Rutanshu Patel
// Problem: Given two non-negative integers num1 and num2 represented as strings,
//          return the product as a string. The input strings do not contain any
//          leading zero, except the number 0 itself.
// Date: July 11, 2025

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size(), m = num2.size();
        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        string product = "";
        for (int num : result) {
            if (product.empty() && num == 0) continue;
            product += (num + '0');
        }

        return product.empty() ? "0" : product;
    }
};

int main() {
    Solution sol;
    string num1 = "498828660196";
    string num2 = "840477629533";

    string result = sol.multiply(num1, num2);
    cout << "Product of " << num1 << " and " << num2 << " is:\n" << result << endl;

    return 0;
}
