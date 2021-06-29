#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {

    int M, N;

    while (cin >> M >> N) {

        int dp[M+1][N+1];

        for (int i = 0; i <= M; i++) dp[i][1] = 1;
        for (int j = 1; j <= N; j++) dp[1][j] = 1;
        for (int j = 1; j <= N; j++) dp[0][j] = 1;
        for (int i = 2; i <= M; i++) {
            for (int j = 2; j <= N; j++) {
                if (i < j) dp[i][j] = dp[i][i];
                else {
                    dp[i][j] = dp[i][j-1] + dp[i-j][j];
                }
            }
        }

        cout << dp[M][N] << endl;

    }

    return 0;

}
