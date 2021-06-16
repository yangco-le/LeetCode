#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

int sticks[25];
bool visit[25];
int n, m, side;

bool cmp(int x, int y) {
	return x > y;
}

bool DFS(int sum, int num, int pos) {
	if (num == 3) return true;
	int sample = 0;
	for (int i = 0; i < m; i++) {
		if (visit[i] || sticks[i] + sum > side || sticks[i] == sample)  continue;
		visit[i] = true;
		if (sticks[i] + sum == side) {
			if (DFS(0, num + 1, 0)) return true;
			else sample = sticks[i];
		}
		else {
			if (DFS(sum + sticks[i], num, pos + 1)) return true;
			else sample = sticks[i];
		}
		visit[i] = false;
	}
	return false;
}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		int length = 0;
		for (int j = 0; j < m; j++) {
			cin >> sticks[j];
			length += sticks[j];
		}
		memset(visit, false, sizeof(visit));
		if (length % 4 != 0) {
			cout << "no" << endl;
			continue;
		}
		sort(sticks, sticks + m, cmp);
		side = length / 4;
		if (sticks[0] > side) {
			cout << "no" << endl;
			continue;
		}
		if (DFS(0, 0, 0)) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}