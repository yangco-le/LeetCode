#include<bits/stdc++.h>
using namespace std;

char* divide(char* str) {
    int carry = 0;
    int num = 0;
    for(int i = 0; i < strlen(str); i++) {
        num = carry * 10 + str[i] - '0';
        carry = num % 2;
        str[i] = num / 2 + '0';
    }
    if(str[0] == '0') return str + 1;
    return str;
}

int main() {

    char ans[105];
    char *str = (char*)malloc(sizeof(char) * 105);
    while(scanf("%s", str) != EOF) {
        int cnt = 0;

        while(strcmp(str, "0") > 0) {
            ans[cnt++] = (str[strlen(str)-1] - '0') % 2 + '0';
            str = divide(str);
        }

        for (int i = cnt - 1; i >= 0; i--) {
            printf("%c", ans[i]);
        }
        printf("\n");
    }

    return 0;
}
