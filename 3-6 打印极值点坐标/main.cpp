#include<bits/stdc++.h>
using namespace std;

int arr[100];

int main() {

    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (arr[0] != arr[1]) cout << 0 << " ";
        for (int i = 1; i < n-1; i++) {
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
                cout << i << " ";
            else if (arr[i] < arr[i-1] && arr[i] < arr[i+1])
                cout << i << " ";
        }
        if (arr[n-2] != arr[n-1]) cout << n-1 << " ";
        cout << endl;
    }

    return 0;
}
