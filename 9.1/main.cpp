#include<iostream>
#include<queue>
#include<cstdio>
#include<cstring>
using namespace std;

struct state {
	int n;
	int t;
	state(int n_, int t_) { 
		n = n_; 
		t = t_;
	}
};

bool visited[100005];

int BFS(int n, int k) {
	queue<state> q;
	visited[n] = true;
	q.push(state(n, 0));
	while (!q.empty()) {
		state curr = q.front();
		q.pop();
		if (curr.n == k) {
			return curr.t;
		}
		for (int i = 0; i < 3; i++) {
			state next(curr.n, curr.t + 1);
			if (i == 0) {
				next.n++;
			}
			else if (i == 1) {
				next.n--;
			}
			else if (i == 2) {
				next.n *= 2;
			}
			if (next.n < 0 || next.n >= 100000 || visited[next.n]) {
				continue;
			}
			visited[next.n] = true;
			q.push(next);
		}
	}

}

int main() {
	int n, k;
	cin >> n >> k;
	int res = BFS(n, k);
	cout << res << endl;
	return 0;
}

