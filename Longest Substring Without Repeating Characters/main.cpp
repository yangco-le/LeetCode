class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s == "") return 0;
        int dp[50005];
        dp[0] = 1;
        for (int i = 1; i < s.size(); i++) {
            int j = i - 1;
            while (j > i - 1 - dp[i - 1] && s[j] != s[i]) j--;
            dp[i] = i - j;
        }
        int res = 1;
        for (int i = 0; i < s.size(); i++) {
            res = max(res, dp[i]);
        }
        return res;
    }
};