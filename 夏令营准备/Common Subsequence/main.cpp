#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string str1, str2;

int main() {

    while (cin >> str1 >> str2) {

        vector<vector<int> > dp(str1.size(), vector<int>(str2.size(), 0));

        dp[0][0] = (str1[0] == str2[0]) ? 1: 0;
        for(int i=1; i<str1.size(); i++) {
            dp[i][0] = (str1[i] == str2[0]) ? 1 : 0;
            dp[i][0] = max(dp[i-1][0], dp[i][0]);
        }
        for(int j=1; j<str2.size(); j++) {
            dp[0][j] = (str1[0] == str2[j]) ? 1 : 0;
            dp[0][j] = max(dp[0][j-1], dp[0][j]);
        }
        for (int i = 1; i < str1.size(); i++) {
            for (int j = 1; j < str2.size(); j++) {
                if (str1[i] == str2[j]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        cout << dp[str1.size()-1][str2.size()-1] << endl;

    }

    return 0;
}
