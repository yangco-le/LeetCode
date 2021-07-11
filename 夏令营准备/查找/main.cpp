#include<bits/stdc++.h>
using namespace std;

int arr[105];

int main() {

    int n, m;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        cin >> m;
        for (int i = 0; i < m; i++) {
            int t;
            cin >> t;
            if (binary_search(arr, arr+n, t))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
