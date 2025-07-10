// Day 2:  Zigzag Conversion using Row-Wise Simulation
// 30 Days of Code Camp
// Author: Rutanshu Patel
// Problem: Converts a string to its zigzag pattern with the given number of rows.
// Date: July 10, 2025

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        bool check = false;
        int i = 0;
        int n = numRows;
        string result = "";
        string k[n];
        int j = 0;

        while (s[i] != '\0') {
            k[j] += s[i];

            if (j == 0 || j == numRows - 1) {
                check = !check;
            }

            if (check) {
                j++;
            } else {
                j--;
            }
            i++;
        }

        for (int i = 0; i < numRows; i++) {
            result += k[i];
        }

        return result;
    }
};

int main() {
    Solution sol;
    string input ;
    int rows ;
    cout << "Enter the string to convert: ";
    cin>> input;
    cout << "Enter the number of rows for zigzag conversion: ";
    cin>> rows;

    string output = sol.convert(input, rows);
    cout << "Zigzag Conversion of " << input << " with " << rows << " rows: "<< output << endl;
    
    return 0;
}
