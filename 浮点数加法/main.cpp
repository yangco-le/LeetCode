#include<bits/stdc++.h>
using namespace std;

int main(){

    string a, b;
    cin >> a >> b;

    int pos = a.find(".");
    string a1 = a.substr(0, pos);
    string a2 = a.substr(pos+1, a.size());

    pos = b.find(".");
    string b1 = b.substr(0, pos);
    string b2 = b.substr(pos+1, b.size());

    if(a2.size() < b2.size()) a2.insert(a2.size(), string(b2.size()-a2.size(), '0'));
    else b2.insert(b2.size(), string(a2.size()-b2.size(), '0'));
    if(a1.size() < b1.size()) a1.insert(0, string(b1.size()-a1.size(), '0'));
    else b1.insert(0, string(a1.size()-b1.size(), '0'));

    int carry = 0;
    for (int i = a2.size()-1; i >= 0; i--) {
        int res = carry + a2[i] -'0' + b2[i] - '0';
        carry = res / 10;
        a2[i] = res % 10 + '0';
    }
    for (int i = a1.size()-1; i >= 0; i--) {
        int res = carry + a1[i] -'0' + b1[i] - '0';
        carry = res / 10;
        a1[i] = res % 10 + '0';
    }
    if (carry) a1 = "1" + a1;

    cout << a1 + "." + a2 << endl;


    return 0;
}
