class Solution {
public:
    string longestPalindrome(string s) {
        int dp[1001][1001];
        for (int i = 0; i < s.size(); i++) {
            dp[i][i] = true;
            if (s[i] == s[i+1]) {
                dp[i][i+1] = true;
            }
            else dp[i][i+1] = false;
        }
        for (int i = s.size() - 3; i >= 0; i--) {
            for (int j = i+2; j < s.size(); j++) {
                dp[i][j] = (s[i] == s[j]) && dp[i+1][j-1];
            }
        }
        int x,y;
        int max=0;
        for (int i = 0; i < s.size(); i++) {
            for (int j = s.size() - 1; j >= i; j--) {
                if (dp[i][j] && j - i + 1 > max) {
                    max = j - i + 1;
                    x = i; y = j;
                } 
            }
        }
        return s.substr(x, y-x+1);
    }
};