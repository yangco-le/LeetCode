#include<iostream>
#include<cstdio>

using namespace std;

bool visit[10005];
int indegree[10005];
int father[10005];

void Initial() {
    for (int i = 0; i < 10001; i++) {
        visit[i] = false;
        father[i] = i;
        indegree[i] = 0;
    }
}

int Find(int x) {
    if (father[x] != x) father[x] = Find(father[x]);
    return father[x];
}

void Union(int x, int y) {
    x = Find(x);
    y = Find(y);
    father[y] = x;
}

bool isTree() {
    int com = 0;
    int root = 0;
    for (int i = 1; i <= 10000; i++) {
        if (!visit[i]) continue;
        if (indegree[i] > 1) return false;
        if (i == Find(i)) com++;
        if (indegree[i] == 0) root++;
    }
    if (com == 0 && root == 0) return true;
    if (root == 1 && com == 1) return true;
    else return false;
}

int main() {

    int x, y;
    int cnt = 1;
    Initial();
    while (cin >> x >> y) {
        if (x == -1 && y == -1) break;
        if (x == 0 && y == 0) {
            if (isTree()) printf("Case %d is a tree.\n", cnt++);
            else printf("Case %d is not a tree.\n", cnt++);
            Initial();
        }
        else {
            visit[x] = true;
            visit[y] = true;
            indegree[y]++;
            Union(x, y);
        }
    }

    return 0;
}