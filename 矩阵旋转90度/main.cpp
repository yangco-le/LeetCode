#include<bits/stdc++.h>
using namespace std;


int a[105][105];
int b[105][105];
int main() {

    int m, n;
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            b[j][m+1-i] = a[i][j];
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}
