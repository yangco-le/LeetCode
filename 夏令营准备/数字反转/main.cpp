#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<unordered_map>
#include<set>

using namespace std;

int Reverse(int x) {
    int res = 0;
    while (x != 0) {
        res = 10 * res + x % 10;
        x = x / 10;
    }
    return res;
}

int main() {

    int a, b;
    while (cin >> a >> b) {
        if (Reverse(a) + Reverse(b) == Reverse(a+b)) cout << a+b << endl;
        else cout << "NO" << endl;
    }


    return 0;
}
