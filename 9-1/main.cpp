#include<iostream>
#include <queue>
#include<string>
#include<map>
using namespace std;

map<string, bool> visited;

struct state {
	string s;
	int step;
	state(string s, int step) : s(s), step(step) {};
};

int BFS(string s, int n) {
	queue<state> q;
	visited[s] = true;
	q.push(state(s, 0));
	while (!q.empty()) {
		state curr = q.front();
		q.pop();
		if (curr.s.find("2012") != string::npos) return curr.step;
		for (int i = 0; i < n - 1; i++) {
			state next(curr.s, curr.step + 1);
			char c = next.s[i];
			next.s[i] = next.s[i + 1];
			next.s[i + 1] = c;
			if (visited[next.s] == true) continue;
			visited[next.s] = true;
			q.push(next);
		}
	}
	return -1;
}

int main() {
	string s;
	int n;
	cin >> n;
	cin >> s;

	int t = BFS(s, n);

	cout << t << endl;

	return 0;
}