#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<unordered_map>
#include<string>

using namespace std;

unordered_map<string, bool> m;

bool AllTrue() {
	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second == false) return false;
	}
	return true;
}

void Reset() {
	for (auto it = m.begin(); it != m.end(); it++) {
		it->second = false;
	}
}

int main() {

	int n;
	string str;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> str;
			m[str] = false;
		}
		int cnt = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> str;
			if (m.find(str) != m.end()) {
				m[str] = true;
				if (AllTrue()) {
					Reset();
					m[str] = true;
					if (AllTrue()) {
						cout << -1 << endl;
						return 0;
					}
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}