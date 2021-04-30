#include<bits/stdc++.h>
using namespace std;

int arr[205];

int main() {

    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int x;
        cin >> x;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
