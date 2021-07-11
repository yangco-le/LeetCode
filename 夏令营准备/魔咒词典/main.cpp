#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>

using namespace std;

int main() {

	string str;
	map<string, string> m;
	while (getline(cin, str)) {
		if (str == "@END@") break;
		int pos = str.find("]");
		string info = str.substr(0, pos + 1);
		string t = str.substr(pos + 2);
		m[info] = t;
		m[t] = info.substr(1,info.size()-2);
	}

	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		string tmp;
		getline(cin, tmp);
		if (m.find(tmp) == m.end()) {
			cout << "what?" << endl;
		}
		else {
			cout << m[tmp] << endl;
		}
	}

	return 0;
}