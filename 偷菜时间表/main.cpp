#include<bits/stdc++.h>
using namespace std;

struct node{
    int h, m;
}p1, p2;

int main() {

    int n;
    scanf("%d", &n);

    p1.h = 13;
    p1.m = 15;

    for(int i = 0; i < n; i++) {
        scanf("%d:%d", &p2.h, &p2.m);
        int carry = (p2.m + p1.m) / 60;
        p2.m = (p2.m + p1.m) % 60;
        p2.h = (p2.h + p1.h + carry) % 24;
        printf("%d:%d\n", p2.h, p2.m);
    }

    return 0;
}
