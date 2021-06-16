/*
描述
会下国际象棋的人都很清楚：皇后可以在横、竖、斜线上不限步数地吃掉其他棋子。如何将8个皇后放在棋盘上（有8 * 8个方格），使它们谁也不能被吃掉！这就是著名的八皇后问题。 对于某个满足要求的8皇后的摆放方法，定义一个皇后串a与之对应，即a=b1b2...b8，其中bi为相应摆法中第i行皇后所处的列数。已经知道8皇后问题一共有92组解（即92个不同的皇后串）。 给出一个数b，要求输出第b个串。串的比较是这样的：皇后串x置于皇后串y之前，当且仅当将x视为整数时比y小。
输入描述：
每组测试数据占1行，包括一个正整数b(1 <= b <= 92)
输出描述：
输出有n行，每行输出对应一个输入。输出应是一个正整数，是对应于b的皇后串。
*/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;

int visit[8][8];
vector<string> str;
int b;

void dfs(int row, string s) {
	if (row == 8) {
		str.push_back(s);
		return;
	}
	for (int i = 0; i < 8; i++) {
		if (visit[row][i]) continue;
		for (int j = row; j < 8; j++) visit[j][i]++;
		for (int j = 1; j < 8; j++) {
			if (row + j < 8) {
				if (i + j < 8) visit[row + j][i + j]++;
				if (i - j >= 0) visit[row + j][i - j]++;
			}
		}
		dfs(row + 1, s+to_string(i+1));
		for (int j = row; j < 8; j++) visit[j][i]--;
		for (int j = 1; j < 8; j++) {
			if (row + j < 8) {
				if (i + j < 8) visit[row + j][i + j]--;
				if (i - j >= 0) visit[row + j][i - j]--;
			}
		}
	}
}

int main() {

	dfs(0, "");

	int n = 1;
	/*cin >> n;*/

	for (int i = 0; i < n; i++) {
		cin >> b;
		cout << str[b - 1] << endl;
	}

	return 0;
}