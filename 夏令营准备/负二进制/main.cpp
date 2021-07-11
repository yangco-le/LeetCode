#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        char ans[105] = {'0'};
        int cnt = 0;
        while(n != 0) {
            int mod = n / -2;
            int remain = n % -2;
            if(remain < 0) {
                mod++;
                remain += 2;
            }

            ans[cnt++] = remain + '0';
            n = mod;
        }
        for (int i = strlen(ans) - 1; i >= 0; i--) {
            printf("%c", ans[i]);
        }
        printf("\n");
    }
    return 0;
}
