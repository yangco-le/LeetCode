#include<bits/stdc++.h>
using namespace std;

int main() {

    string str1, str2;

    cin >> str1 >> str2;

    int pos = 0, cnt = 0;;

    while((pos = str1.find(str2, pos)) != string::npos) {
        cnt ++;
        pos ++;
    }

    cout << cnt << endl;

    return 0;
}
