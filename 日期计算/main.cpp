#include<bits/stdc++.h>
using namespace std;

struct node {
    int year, month, day;
}p;

int f[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leapyear(int year) {
    return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
}

bool check(int m, int d) {

    bool flag = true;

    if(m < 1 || m > 12) flag = false;

    if (d < 1 || d > f[m]) flag = false;
    return flag;

}

int main() {

    while (scanf("%d %d %d", &p.year, &p.month, &p.day) != EOF) {

        if (leapyear(p.year)) f[2] = 29;
        else f[2] = 28;

        if (!check(p.month, p.day)) {
            printf("Input error!\n");
            continue;
        }

        int ans = p.day;
        for (int i = 1; i < p.month; i++) {
            ans += f[i];
        }

        printf("%d\n", ans);

    }

    return 0;
}
