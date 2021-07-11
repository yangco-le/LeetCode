#include<bits/stdc++.h>
using namespace std;

int main() {

    char str[105];
    int x, y;
    scanf("%s %d %d", str, &x, &y);

    int len = strlen(str);
    int ans;
    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') ans = x * ans + str[i] - '0';
        else if (str[i] >= 'A' && str[i] <= 'F') ans = x * ans + str[i] - 'A' + 10;
    }

    char n[105];
    int cnt = 0;
    while(ans > 0) {
        n[cnt++] = (ans % y < 10) ? ans % y + '0': ans % y + 'A';
        ans /= y;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        printf("%c", n[i]);
    }

    return 0;
}
