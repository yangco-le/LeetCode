#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int GCD(int a, int b) {
    return (b == 0) ? a : GCD(b, a % b);
}

int main() {

    int a, b;
    while (cin >> a >> b) {
        cout << GCD(a, b) << endl;
    }

    return 0;
}