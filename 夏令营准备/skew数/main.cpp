#include<bits/stdc++.h>
using namespace std;

int main() {

    string str;

    while (cin >> str) {
        if (str == "0") break;
        int ans = 0;
        for (int i = 0; i < str.size(); i++) {
            ans += (str[i] - '0')*(pow(2, str.size() - i) - 1);
        }
        cout << ans <<endl;
    }

    return 0;
}
