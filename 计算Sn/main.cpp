#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, n;
    scanf("%d %d", &a, &n);

    int s = 0;
    for (int i = n; i > 0; i--) {
        s += a * i;
        a *= 10;
    }

    printf("%d", s);

    return 0;
}
