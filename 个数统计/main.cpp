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

    for (int i = 1; i <= 100 && !arr[i]; i++){
        printf("%d %d", i, arr[i]);
    }

    return 0;
}
