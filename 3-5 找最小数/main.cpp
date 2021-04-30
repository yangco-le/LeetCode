#include<bits/stdc++.h>
using namespace std;

struct s{
    int x;
    int y;
};

s arr[1005];

int main() {

    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> arr[i].x >> arr[i].y;
        }
        int pos = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i].x < arr[pos].x)
                pos = i;
            else if (arr[i].x == arr[pos].x && arr[i].y < arr[pos].y)
                pos = i;
        }
        cout << arr[pos].x << " " << arr[pos].y << endl;
    }

    return 0;
}
