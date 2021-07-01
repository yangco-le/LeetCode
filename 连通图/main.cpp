#include<iostream>
#include<cstdio>

using namespace std;

int father[1005];

void Initial(int n) {
    for (int i = 0; i <= n; i++) {
        father[i] = i;
    }
}

int Find(int x) {
    if (x != father[x]) father[x] = Find(father[x]);
    return father[x];
}

void Union(int x, int y) {
    x = Find(x);
    y = Find(y);
    father[x] = y;
    return;
}

int main() {

    int N, M;
    while (cin >> N) {
        if (N == 0) break;
        cin >> M;
        Initial(N);
        for (int i = 0; i < M; i++) {
            int x, y;
            cin >> x >> y;
            Union(x, y);
        }
        int cnt = 0;
        for (int i = 1; i <= N; i++) {
            if (Find(i) == i) cnt++;
        }
        cout << cnt - 1 << endl;
    }


    return 0;
}