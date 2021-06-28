#include<iostream>
#include<cstdio>

using namespace std;

int F(int n, int m) {
    if (m > n) {
        return 0;
    }
    return F(n, 2 * m) + F(n, 2 * m + 1) + 1;
}

int main() {

    int n, m;
    while (cin >> m >> n) {
        if (n == 0 && m == 0) break;
        cout << F(n, m) << endl;
    }

    return 0;
}