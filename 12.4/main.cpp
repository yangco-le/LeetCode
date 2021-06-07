#include<bits/stdc++.h>
#include<iostream>
using namespace std;


const int N = 30;
int k;
int height[N];
int dp[N];

int main() {

    while(scanf("%d", &k) != EOF) {

        for (int i = 0; i < k; i++) {
            scanf("%d", &height[i]);
        }

        int ans = 1;

        dp[0] = 1;
        for (int i = 1; i < k; i++) {
            dp[i] = 1;
            for (int j = 0; j < i; j++){
                if (height[j] >= height[i])
                    dp[i] = max(dp[i], dp[j]+1);
            }
            ans = max(dp[i], ans);
        }

        printf("%d", ans);

/*
        for (int i = 0; i < k; i++) {
            printf("%d ", arr[i]);
        }
*/

    }

    return 0;

}
