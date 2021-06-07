#include<bits/stdc++.h>
#include<iostream>
using namespace std;

const int N = 105;
int n;
int matrix[N][N];
int dp[N][N];

int main() {

    while (cin >> n) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cin >> matrix[i][j];
            }
        }


        for (int i = 0; i < n; i++) dp[n-1][i] = matrix[n-1][i];
        for (int i = n-2; i >=0; i--) {
            for (int j = 0; j <= i; j++) {
                dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + matrix[i][j];
            }
        }

        cout << dp[0][0];


    }




    return 0;

}
