class Solution {
public:

    int row, col;
    int dir[4][2] = {
        {1,0}, {-1,0}, {0,1}, {0,-1}
    };

    bool valid(int x, int y) {
        if (x >= 0 && x < row && y >= 0 && y < col) {
            return true;
        }
        else return false;
    }

    void dfs(int x, int y, vector<vector<char>>& grid) {
        if (!valid(x, y)) return;
        if (grid[x][y] == '0') return;
        grid[x][y] = '0';
        for (int i = 0; i < 4; i++) {
            dfs(x+dir[i][0], y+dir[i][1], grid);
        }
        return;
    }

    int numIslands(vector<vector<char>>& grid) {
        row = grid.size();
        col = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == '1') {
                    dfs(i, j, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};