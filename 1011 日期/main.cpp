#include<bits/stdc++.h>
using namespace std;

struct node {
    int year, month, day;
}p;

int f[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

string s[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main() {

    while (scanf("%d %d", &p.month, &p.day) != EOF) {

        int ans = p.day;
        for (int i = 4; i < p.month; i++) {
            ans += f[i];
        }
        ans -= 12;

        int index = (ans + 4) % 7;
        printf("%s\n", s[index].c_str());

    }

    return 0;
}
