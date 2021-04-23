#include<bits/stdc++.h>
using namespace std;

int n;
int a[5][5];

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void move(int n) {

    switch(n) {

    case 1:

        for (int j = 1; j <= 4; j++) {
            for (int i = 1; i <= 3; i++) {
                int t = i + 1;
                while(a[t][j] == 0 && t <= 4) t++;
                if (t == 5) break;
                if (a[i][j] != a[t][j]) continue;
                a[i][j] *= 2;
                a[t][j] = 0;
            }
        }

        for (int j = 1; j <= 4; j++) {
            for (int i = 1; i <= 4; i++) {
                if (a[i][j] != 0) {
                    int t = i;
                    while (t > 1 && a[t - 1][j] == 0) {
                        swap(a[t - 1][j], a[t][j]);
                        t--;
                    }
                }
            }
        }

        break;

    case 2:

        for (int j = 1; j <= 4; j++) {
            for (int i = 4; i >= 2; i--) {
                int t = i - 1;
                while(a[t][j] == 0 && t >= 1) t--;
                if (t == 0) break;
                if (a[i][j] != a[t][j]) continue;
                a[i][j] *= 2;
                a[t][j] = 0;
            }
        }

        for (int j = 1; j <= 4; j++) {
            for (int i = 3; i >= 1; i--) {
                if (a[i][j] != 0) {
                    int t = i;
                    while (t < 4 && a[t + 1][j] == 0) {
                        swap(a[t + 1][j], a[t][j]);
                        t++;
                    }
                }
            }
        }

        break;

    case 3:

        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 3; j++) {
                int t = j + 1;
                while(a[i][t] == 0 && t <= 4) t++;
                if (t == 5) break;
                if (a[i][j] != a[i][t]) continue;
                a[i][j] *= 2;
                a[i][t] = 0;
            }
        }

        for (int i = 1; i <= 4; i++) {
            for (int j = 2; j <= 4; j++) {
                if (a[i][j] != 0) {
                    int t = j;
                    while (t > 1 && a[i][t - 1] == 0) {
                        swap(a[i][t - 1], a[i][t]);
                        t--;
                    }
                }
            }
        }

        break;

    case 4:

        for (int i = 1; i <= 4; i++) {
            for (int j = 4; j >= 2; j--) {
                int t = j - 1;
                while(a[i][t] == 0 && t >= 1) t--;
                if (t == 0) break;
                if (a[i][j] != a[i][t]) continue;
                a[i][j] *= 2;
                a[i][t] = 0;
            }
        }

        for (int i = 1; i <= 4; i++) {
            for (int j = 3; j >= 1; j--) {
                if (a[i][j] != 0) {
                    int t = j;
                    while (t < 4 && a[i][t + 1] == 0) {
                        swap(a[i][t + 1], a[i][t]);
                        t++;
                    }
                }
            }
        }

        break;

    }
}

int main() {

    while (cin >> n) {

        for (int i = 1; i <= 4; i++)
            for(int j = 1; j <= 4; j++)
                cin >> a[i][j];

        move(n);

        for (int i = 1; i <= 4; i++) {
            for(int j = 1; j <= 4; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }

    }

    return 0;
}
