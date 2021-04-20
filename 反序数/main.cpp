#include<bits/stdc++.h>
using namespace std;

int inverse(int n) {
    int ans = 0;
    while (n > 0) {
        ans = 10 * ans + n % 10;
        n /= 10;
    }
    return ans;
}

int main() {

    for (int i = 1000; i < 10000; i++) {
        if (i * 9 == inverse(i)) printf("%d\n", i);
    }

    return 0;
}
