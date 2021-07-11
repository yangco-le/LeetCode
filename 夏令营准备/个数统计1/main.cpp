#include <bits/stdc++.h>
using namespace std;

int arr[105] = {0};

int main() {
    int n, x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        arr[x]++;
    }

    for (int i = 1; i <= 100; i++){
        if (!arr[i]) continue;
        printf("%d %d\n", i, arr[i]);
    }

    return 0;
}
