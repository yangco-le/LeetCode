#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int main() {

    int M, N;
    while (cin >> M >> N) {
        string str;
        cin >> str;
        long long res = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] <= '9' && str[i] >= '0')
                res = res * M + str[i] - '0';
            else {
                res = res * M + str[i] - 'A' + 10;
            }
        }

        vector<char> ans;
        while (res != 0) {
            if (res % N < 10) {
                ans.push_back(res % N + '0');
            }
            else {
                ans.push_back(res % N - 10 + 'a');
            }
            res /= N;
        }

        for (int i = ans.size() - 1; i >= 0; i--) {
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}