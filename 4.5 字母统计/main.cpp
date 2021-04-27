#include<bits/stdc++.h>
using namespace std;

int main() {

    string str;

    while(getline(cin, str)) {
        int num[26] = {0};
        for (int i = 0; i < str.size(); i++) {
            if('A' <= str[i] && str[i] <= 'Z')
                num[str[i] - 'A']++;
        }
        for (int i = 0; i < 26; i++) {
            printf("%c:%d\n", i + 'A', num[i]);
        }
    }

    return 0;
}
