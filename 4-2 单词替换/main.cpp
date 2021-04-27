#include<bits/stdc++.h>
using namespace std;

int main() {

    string str, a, b;

    getline(cin, str);
    getline(cin, a);
    getline(cin, b);

    str = " " + str + " ";
    a = " " + a + " ";
    b = " " + b + " ";

    while (true) {
        int pos = str.find(a);
        if (pos == string::npos) break;
        else {
            str.erase(pos, a.size());
            str.insert(pos, b);
        }
    }
    str.erase(0, 1);
    str.erase(str.size()-1, 1);
    cout << str << endl;

    return 0;
}
