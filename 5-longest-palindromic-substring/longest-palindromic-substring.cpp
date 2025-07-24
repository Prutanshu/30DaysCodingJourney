class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxLen = 0;
        string result = "";

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (isPalindrome(s, i, j) && (j - i + 1) > maxLen) {
                    maxLen = j - i + 1;
                    result = s.substr(i, maxLen);
                }
            }
        }

        return result;
    }

    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            ++left;
            --right;
        }
        return true;
    }
};
