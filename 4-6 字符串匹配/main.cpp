#include<bits/stdc++.h>
using namespace std;

string str[1005];
string str2[1005];
string target;

int main() {

    int n;
    while(cin >> n) {
        // input
        for (int i = 0; i < n; i++) {
            cin >> str[i];
            str2[i] = string(str[i]);
        }
        cin >> target;

        for (int i = 0; i < n ; i++) {
            for (int j = 0; j < str[i].size(); j++) {
                if (str[i][j] >= 'A' && str[i][j] <= 'Z')
                    str2[i][j] = str[i][j] - 'A' + 'a';
            }
        }

        // match
        for (int i = 0; i < n; i++) {
            int k = 0;
            int j;
            for (j = 0; j < str2[i].size(); j++) {
                if (target[k] == '[') {
                    k++;
                    bool flag = false;
                    while (target[k] != ']') {
                        if (str2[i][j] == target[k]) {
                            flag = true;
                        }
                        k++;
                    }
                    k++;
                    j++;
                    if (!flag) break;
                }
                if (target[k] != str2[i][j]) break;
                k++;
            }
            if (k == target.size() && j == str2[i].size())
                cout << i+1 << " " << str[i] <<endl;

        }

    }

    return 0;
}
