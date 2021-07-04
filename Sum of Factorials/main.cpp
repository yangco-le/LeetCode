#include<bits/stdc++.h>

using namespace std;

int nums[20];

void Initial() {
    int res = 1;
    nums[0] = 1;
    for (int i = 1; i <= 10; i++) {
        res *= i;
        nums[i] = res;
    }
}

int main() {

    Initial();

    int n;
    while (cin >> n) {
        for (int i = 10; i >=0; i--) {
            if(n >= nums[i]) n -= nums[i];
        }
        if (n == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
