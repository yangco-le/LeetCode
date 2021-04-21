#include<bits/stdc++.h>
using namespace std;

int main() {
    char *str = (char*)malloc(sizeof(char) * 105);
    int x = 16;

    while(scanf("%s", str) != EOF) {
        str += 2;
        int ans = 0;
        int len = strlen(str);
        for (int i = 0; i < len; i++) {
            if (str[i] >= '0' && str[i] <= '9') ans = x * ans + str[i] - '0';
            else if (str[i] >= 'A' && str[i] <= 'F') ans = x * ans + str[i] - 'A' + 10;
        }

        printf("%d\n", ans);
    }


    return 0;
}
