#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    scanf("%d %d", &n, &x);

    char ans[105];
    int cnt = 0;
    while(n > 0) {
        ans[cnt++] = (n % x < 10) ? n % x + '0' : n % x + 'a';
        n /= x;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        printf("%c", ans[i]);
    }

    return 0;
}
