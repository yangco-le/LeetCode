#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

int main() {

	int n, p, m;
	while (cin >> n >> p >> m) {
		if (n == 0 && p == 0 && m == 0) break;
		queue<int> q;
		int cnt = -1;
		for (int i = 1; i <= n; i++) {
			q.push(i);
		}
		for (int i = 0; i < p - 1; i++) {
			int t = q.front();
			q.pop();
			q.push(t);
		}

		while (!q.empty()) {
			cnt = (cnt + 1) % m;
			if (cnt == m - 1) {
				cout << q.front();
				if (q.size() != 1) cout << ',';
				q.pop();
			}
			else {
				int t = q.front();
				q.pop();
				q.push(t);
			}
		}
		cout << endl;
	}

	return 0;
}