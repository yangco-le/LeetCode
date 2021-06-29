#include<bits/stdc++.h>
#include<iostream>
using namespace std;

const int MAXN = 105;
int n;

int matrix[MAXN][MAXN];
int total[MAXN][MAXN];
int arr[MAXN];
int dp[MAXN];


void cal_total() {

    for (int i = 0; i < n; i++) {
        total[0][i] = matrix[0][i];
    }

    for (int i = 1; i < n; i++)
        for (int j = 0; j < n; j++)
            total[i][j] = total[i-1][j] + matrix[i][j];

}

int MaxSquence() {

    int ans = arr[0];
    dp[0] = arr[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
        ans = (dp[i] > ans) ? dp[i] : ans;
    }

    return ans;

}

int MaxSubmatrix() {

    int t = matrix[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = 0; k < n; k++) {
                arr[k] = (i == 0) ? total[j][k] : total[j][k] - total[i-1][k];
            }
            int ans = MaxSquence();
            t = max(t, ans);
        }
    }


    return t;

}

int main() {

    while (scanf("%d", &n) != EOF) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        cal_total();

        int ans = MaxSubmatrix();
        //int ans = 1;

        printf("%d\n", ans);

    }

    return 0;

}
