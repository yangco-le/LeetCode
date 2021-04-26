#include<bits/stdc++.h>
using namespace std;

int main() {

    int num[4] = {0};

    char str[105];

    gets(str);
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if(str[i] >= 'a' && str[i] <= 'z'|| str[i] >= 'A' && str[i] <= 'Z')
            num[0]++;
        else if (str[i] >= '0' && str[i] <= '9')
            num[1]++;
        else if (str[i] == ' ')
            num[2]++;
        else
            num[3]++;
    }

    printf("%d %d %d %d", num[0], num[1], num[2], num[3]);

    return 0;
}
