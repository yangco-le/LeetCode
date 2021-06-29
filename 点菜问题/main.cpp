#include<bits/stdc++.h>
#include<iostream>
using namespace std;

const int N =105;
int w[105];
int v[105];
int dp[1005];
int c, n;

int main() {

    while ( cin >> c >> n) {

        for (int i =0 ;i <n;i++) {
            cin >> w[i] >> v[i];
        }

        for (int i = 0; i <= c; i++) dp[i] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = c; j >= w[i]; j--) {
                dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
            }
        }

        cout << dp[c];
    }

    return 0;

}
