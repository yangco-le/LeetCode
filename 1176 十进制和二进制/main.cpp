#include<bits/stdc++.h>
using namespace std;

string str;
vector<int>v;

string divide(string str) {
    int carry = 0;
    for(int i = 0; i < str.size(); i++) {
        int num = carry * 10 + str[i] - '0';
        carry = num % 2;
        str[i] = num / 2 + '0';
    }
    while(str[0] == '0') str.erase(0, 1);
    return str;
}

string opt(string str, int n) {
    reverse(str.begin(), str.end());
    int carry = 0;
    int i;
    for (i = 0; i < str.size(); i++) {
        int tmp = 2 * (str[i] - '0') + carry;
        str[i] = tmp % 10 + '0';
        carry = tmp / 10;
    }
    if(carry) str.insert(str.size(), "1");
    carry = n;
    for (int i = 0; i < str.size(); i++) {
        int tmp = str[i] - '0' + carry;
        str[i] = tmp % 10 + '0';
        carry = tmp / 10;
    }
    reverse(str.begin(), str.end());
    return str;
}

int main() {

    char ans[1005], n[1005];
    char *s = (char*)malloc(sizeof(char) * 1000);

    while(scanf("%s", s) != EOF) {
        str = s;
        int cnt = 0;

        while(str > "0") {
            ans[cnt++] = (str[str.size()-1] - '0') % 2 + '0';
            str = divide(str);
        }

        char n[1000] = {'0'};
        string nstr = n;
        for (int i = 0; i < cnt; i++) {
            nstr = opt(nstr, ans[i] - '0');
        }

        cout<<nstr<<endl;
    }

    return 0;
}
