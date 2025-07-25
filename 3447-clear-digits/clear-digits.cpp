class Solution {
public:
    string clearDigits(string s) {
        vector<char> chars;
        for(int i=0;i<s.length();i++){
            if(s[i] < '0' || s[i] > '9'){
                chars.push_back(s[i]);
            }
            else{
                chars.pop_back();
            }
        }
        string r="";
        for(int i=0;i<chars.size();i++){
            r+=chars[i];
        }
        return r;
    }
};