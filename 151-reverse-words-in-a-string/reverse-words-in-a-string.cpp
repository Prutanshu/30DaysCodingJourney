class Solution {
public:
    string reverseWords(string s) {
        vector<string> r;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp += s[i];
            } else {
                if (!temp.empty()) {
                    r.push_back(temp);
                    temp = "";
                }
            }
        }

        if (!temp.empty()) {
            r.push_back(temp);
        }

        reverse(r.begin(), r.end());

        string result = "";
        for (int i = 0; i < r.size(); i++) {
            result += r[i];
            if (i != r.size() - 1) result += " ";
        }
        return result;
    }
};
