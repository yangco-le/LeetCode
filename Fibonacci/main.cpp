#include<iostream>
#include<cstdio>

using namespace std;


int main() {

    int dp[35];

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= 30; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    int n;
    cin >> n;
    cout << dp[n] << endl;

    return 0;
}