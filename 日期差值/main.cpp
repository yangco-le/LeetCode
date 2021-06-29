#include<bits/stdc++.h>
using namespace std;

struct node {
    int year, month, day;
} p1, p2;

int f1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int f2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leapyear(int year) {
    return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
}

int main() {

    while (scanf("%4d%2d%2d", &p1.year, &p1.month, &p1.day) != EOF) {

        scanf("%4d%2d%2d", &p2.year, &p2.month, &p2.day);

        int part1 = p1.day;
        for (int i = 1; i < p1.month; i++) {
            if(leapyear(p1.year)) part1 += f2[i];
            else part1 += f1[i];
        }
        int part12 = leapyear(p1.year) ? (366 - part1) : (365 - part1);

        int part2 = 0;
        for (int i = p1.year + 1; i < p2.year; i++) {
            part2 += leapyear(p1.year) ? 366 : 365;
        }

        int part3 = p2.day;
        for (int i = 1; i < p2.month; i++) {
            if(leapyear(p2.year)) part3 += f2[i];
            else part3 += f1[i];
        }

        int ans = (p1.year == p2.year) ? (part3 - part1) : (part12 + part2 + part3);
        ans++;
        printf("%d\n", ans);

    }

    return 0;
}
