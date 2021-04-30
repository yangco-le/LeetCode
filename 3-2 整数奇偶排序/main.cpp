#include<bits/stdc++.h>
using namespace std;

int a[10];

bool cmp(int a, int b) {
    if (a%2 != b%2) return a%2 > b%2;
    else if (a % 2 == 1) return a > b;
    else return a < b;
}

int main() {

    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9]) {
        sort(a, a+10, cmp);
        for (int i = 0; i < 10; i++) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
