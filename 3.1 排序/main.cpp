#include<bits/stdc++.h>
using namespace std;

int num[105];

int main() {

    int n;

    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }

        sort(num, num+n);

        for (int i = 0; i < n; i++) {
            cout << num[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
