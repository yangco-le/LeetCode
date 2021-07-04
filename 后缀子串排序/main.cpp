#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    
    set<string> s;
    
    while (str.size()) {
        s.insert(str);
        str = str.substr(1);
    }
    
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }
    
    return 0;
}