#include<bits/stdc++.h>
using namespace std;

int main() {

    string str;
    while(getline(cin, str)) {
        for(int i = 0; i < str.size(); i++) {
            if('a' <= str[i] && str[i] <= 'z')
                str[i] = (str[i] - 'a' + 1) % 26 + 'a';
            else if ('A' <= str[i] && str[i] <= 'Z')
                str[i] = (str[i] - 'A' + 1) % 26 + 'A';
        }
        cout << str << endl;
    }

    return 0;
}
