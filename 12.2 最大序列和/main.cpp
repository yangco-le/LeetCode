#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int N;
long long T[1000005];
long long dp[1000005];

int main() {

    while (scanf("%d", &N) != EOF) {

        for (int i = 0; i < N; i++) {
            scanf("%lld", &T[i]);
        }

        dp[0] = T[0];
        long long t = T[0];
        for (int i = 1; i < N; i++) {
            dp[i] = max(dp[i-1] + T[i], T[i]);
            if (dp[i] > t) t = dp[i];
        }

        printf("%lld", t);
    }
    return 0;

}
