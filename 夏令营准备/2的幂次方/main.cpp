#include<iostream>
#include<cstdio>

using namespace std;

void F(int n) {
    if (n == 0 || n == 2) {
        cout << n;
        return;
    }
    int cnt = 0;
    int num[15];
    while (n != 0) {
        num[cnt++] = n % 2;
        n /= 2;
    }
    for (int i = cnt - 1; i >= 0; i--) {
        if (num[i] == 1) {
            if (i != cnt - 1) {
                cout << "+";
            }
            if (i == 1) {
                cout << "2";
            }
            else {
                cout << "2(";
                F(i);
                cout << ")";
            }
        }
    }
    return;
}

int main() {

    int n;
    cin >> n;

    F(n);

    return 0;

}