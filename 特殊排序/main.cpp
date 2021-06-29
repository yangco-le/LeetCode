#include<bits/stdc++.h>
using namespace std;

int num[1005];

bool cmp(int a, int b) {
    return a < b;
}

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    sort(num, num+n);

    cout << num[n-1] << endl;

    if (n == 1) cout << -1;
    else {
        for (int i = 0; i < n - 1; i++) {
            cout << num[i] << " ";
        }
    }

    return 0;
}
