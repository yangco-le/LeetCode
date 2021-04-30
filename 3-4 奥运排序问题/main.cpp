#include<bits/stdc++.h>
using namespace std;

struct country{
    int gold;
    int all;
    int people;
    double gr;
    double ar;
    int r[4];
};

country num1[105];
country num2[105];
int pos[105];

int main() {

    int N, M;
    while (cin >> N >> M) {
        for (int i = 0; i < N; i++) {
            cin >> num1[i].gold >> num1[i].all >> num1[i].people;
            num1[i].gr = (num1[i].gold==0) ? 0 : 1.0 * num1[i].gold / num1[i].people;
            num1[i].ar = (num1[i].all==0) ? 0 : 1.0 * num1[i].all / num1[i].people;
            num1[i].r[0] = num1[i].r[1] = num1[i].r[2] =  num1[i].r[3] = 1;
        }

        for (int i = 0; i < M; i++) {
            cin >> pos[i];
        }

        for (int i = 0; i < M; i++) {
            num2[i] = num1[pos[i]];
        }

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M; j++) {
                if (num2[j].gold > num2[i].gold) num2[i].r[0]++;
                if (num2[j].all > num2[i].all) num2[i].r[1]++;
                if (num2[j].gr > num2[i].gr) num2[i].r[2]++;
                if (num2[j].ar > num2[i].ar) num2[i].r[3]++;
            }
        }

        for (int i = 0; i < M; i++) {
            int p = 0;
            for (int j = 1; j < 4; j++) {
                if (num2[i].r[j] < num2[i].r[p]) p = j;
            }
            cout << num2[i].r[p] << ":" << p + 1 <<endl;
        }
        cout << endl;
    }



    return 0;
}
