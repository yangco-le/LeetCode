#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int p, q;
bool visited[30][30];
int dir[8][2] = {
	{-1, -2}, {1, -2}, {-2, -1}, {2, -1}, {-2, 1}, {2, 1}, {-1, 2}, {1, 2}
};

bool DFS(int x, int y, int step, string  & res) {
	if (step == p * q) {
		return true;
	}
	else {
		for (int i = 0; i < 8; i++) {
			int x_ = x + dir[i][0];
			int y_ = y + dir[i][1];
			if (x_ < 0 || x_ >= p || y_ < 0 || y_ >= q || visited[x_][y_]) {
				continue;
			}
			visited[x_][y_] = true;
			char row = x_ + '1';
			char col = y_ + 'A';
			string res_ = res + col + row;
			if (DFS(x_, y_, step + 1, res_)) {
				res = res_;
				return true;
			}
			visited[x_][y_] = false;
		}
	}
	return false;
}

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p >> q;
		memset(visited, false, sizeof(visited));
		string res = "A1";
		visited[0][0] = true;
		cout << "Scenario #" << i + 1 << ":\n";
		if (DFS(0, 0, 1, res)) cout << res << endl ;
		else cout << "impossible" << endl;
		cout << endl;
	}

	return 0;
}