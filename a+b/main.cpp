#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    
    string a, b;
    while (cin >> a >> b) {
        a = string(1001 - a.size(), '0') + a;
        b = string(1001 - b.size(), '0') + b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int carry = 0;
        string res = "";
        for (int i = 0; i < 1001; i++) {
            int curr = a[i] - '0' + b[i] - '0' + carry;
            res += curr % 10 + '0';
            carry = curr / 10;
        }
        reverse(res.begin(), res.end());
        while (res[0] == '0' && res.size() > 1) {
            res.erase(0, 1);
        }
        cout << res << endl;
    }
    
    return 0;
}