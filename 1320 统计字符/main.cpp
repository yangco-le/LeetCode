#include<bits/stdc++.h>
using namespace std;

int main() {
    char s1[105];
    char s2[105];

    while (true) {
        gets(s1);
        if (s1[0] == '#') break;
        gets(s2);

        for (int i = 0; i < strlen(s1); i++) {
            int cnt = 0;
            for (int j = 0; j < strlen(s2); j++) {
                if (s1[i] == s2[j]) cnt++;
            }
            printf("%c %d\n", s1[i], cnt);
        }

    }

    return 0;
}
