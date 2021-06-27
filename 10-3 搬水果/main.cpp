#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>

using namespace std;

int main() {

	int n;
	while (cin >> n) {
		if (n == 0) break;
		priority_queue<int, vector<int>, greater<int>> q;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			q.push(x);
		}

		int res = 0;
		while (q.size() > 1) {
			int a = q.top(); q.pop();
			int b = q.top(); q.pop();
			res += a + b;
			q.push(a + b);
		}
		cout << res << endl;
	}

	return 0;
}