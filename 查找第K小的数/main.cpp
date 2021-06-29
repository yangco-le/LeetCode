#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>

using namespace std;

int main() {

	int n;
	while (cin >> n) {
		priority_queue < int, vector<int>, greater<int> > q;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			q.push(x);
		}

		int k, tmp;
		cin >> k;
		for (int i = 0; i < k; i++) {
			tmp = q.top(); q.pop();
			while (q.top() == tmp) {
				q.pop();
			}
		}
		cout << tmp << endl;
	}

	return 0;
}