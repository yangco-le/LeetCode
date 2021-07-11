#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>

using namespace std;

int main() {

	string str;
	while (cin >> str) {
		map<string, int> m;
		for (int i = 0; i < str.size(); i++) {
			for (int j = i; j < str.size(); j++) {
				string key = str.substr(i, j - i + 1);
				m[key] += 1;
			}
		}

		for (auto it = m.begin(); it != m.end(); it++) {
			if (it->second <= 1) continue;
			cout << it->first << " " << it->second << endl;
		}
	}

	return 0;
}