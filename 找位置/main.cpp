#include<bits/stdc++.h>
using namespace std;

vector<int> num[128];

int main() {

    string str;

    while (cin >> str) {
        for (int i = 0; i < str.size(); i++) {
            num[str[i]].push_back(i);
        }
        for (int i = 0; i < str.size(); i++) {
            if (num[str[i]].size() > 1) {
                printf("%c:%d", str[i], num[str[i]][0]);
                for (int j = 1; j < num[str[i]].size(); j++) {
                    printf(",%c:%d", str[i], num[str[i]][j]);
                }
                printf("\n");
                num[str[i]].clear();
            }
        }
    }


    return 0;
}
