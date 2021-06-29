#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main() {

    int n;
    while (cin >> n) {
        if (n == 1) {
            cout << "no" << endl;
            continue;
        }
        bool flag = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                flag = false;
            }
        }
        if (flag) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}