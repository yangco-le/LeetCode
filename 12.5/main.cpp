#include<bits/stdc++.h>
#include<iostream>
using namespace std;

const int N = 1005;
int n;
int arr[N];
int dp[N];

int main() {

    while (cin >> n) {

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ans = arr[0];

        dp[0] = arr[0];
        for (int i = 1; i < n; i++) {
            dp[i] = arr[i];
            for (int j = 0; j < i; j++) {
                if (arr[j] < arr[i])
                    dp[i] = max(dp[j] + arr[i], dp[i]);
            }
            ans = max(ans, dp[i]);
        }

        cout << ans << endl;
    }

    return 0;

}
