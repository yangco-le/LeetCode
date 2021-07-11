#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<unordered_map>

using namespace std;

int main() {

    string s1 = "QWERTYUIOP[]\\";
    string s2 = "ASDFGHJKL;'";
    string s3 = "ZXCVBNM,./";
    string s4 = "1234567890-=";

    unordered_map<char, char> mp;
    mp[' '] = ' ';
    for (int i = 1; i < s1.size(); i++) {
        mp[s1[i]] = s1[i-1];
    }
    for (int i = 1; i < s2.size(); i++) {
        mp[s2[i]] = s2[i-1];
    }
    for (int i = 1; i < s3.size(); i++) {
        mp[s3[i]] = s3[i-1];
    }
    for (int i = 1; i < s4.size(); i++) {
        mp[s4[i]] = s4[i-1];
    }

    string str;
    while (getline(cin, str)) {
        string res = str;
        for (int i = 0; i < str.size(); i++) {
            res[i] = mp[str[i]];
        }
        cout << res << endl;
    }

    return 0;
}
