#include<bits/stdc++.h>
using namespace std;

char str[105];

void process() {
    int len = strlen(str);
    bool flag = false;

    for (int i = 0; i < len; i++) {
        if(str[i] == ' ') flag = false;
        if(!flag && str[i] != ' ') {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] + 'A' - 'a';
            flag = true;
        }
    }
}

int main() {

    while(gets(str)) {

        process();

        printf("%s\n", str);
    }

    return 0;
}
