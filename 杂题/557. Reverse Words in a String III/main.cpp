class Solution {
public:
    string reverseWords(string s) {
        string res;
        int start = 0;
        int i;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                string tmp = s.substr(start, i - start);
                reverse(tmp.begin(), tmp.end());
                res += tmp + " ";
                start = i + 1;
            }
        }
        string tmp = s.substr(start, i - start);
        reverse(tmp.begin(), tmp.end());
        res += tmp;
        return res;
    }
};