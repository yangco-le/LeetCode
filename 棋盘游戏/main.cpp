#include<bits/stdc++.h>

using namespace std;

int grid[6][6];
bool visit[6][6];
int dir[4][2] = {
    {1, 0}, {0, -1}, {-1, 0}, {0, 1}
};
int x,y,X,Y;
int res;

bool valid(int x, int y) {
    if (x>=0 && x<6 && y>=0 && y<6) return true;
    else return false;
}

void dfs(int x, int y, int state, int total) {
    if (x == X && y == Y) {
        res = min(res, total);
        return;
    }
    visit[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int n_x = x + dir[i][0];
        int n_y = y + dir[i][1];
        int cost = grid[n_x][n_y] * state;
        dfs(n_x, n_y, (cost % 4) + 1, total + cost);
    }
    visit[x][y] = false;
    return;
}

int main() {
    res = INT_MAX;

    for (int i = 0; i<6;i++) {
        for (int j=0;j<6;j++) {
            cin >> grid[i][j];
        }
    }

    cin >> x >> y >> X >> Y;

    dfs(x, y, 1, 0);

    cout << res << endl;
}
