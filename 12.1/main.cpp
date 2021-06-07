#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int N;
long long dp[100];

int main() {

    while(cin >> N){

        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= N; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }

        cout << dp[N] << endl;
    }

    return 0;

}
