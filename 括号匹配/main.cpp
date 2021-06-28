#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

int main() {

	string str;
	while (cin >> str) {
		string res = string(str.size(), ' ');
		stack<int> s;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') s.push(i);
			else if (str[i] == ')') {
				if (s.empty()) {
					res[i] = '?';
				}
				else {
					s.pop();
				}
			}
		}

		while (!s.empty()) {
			res[s.top()] = '$';
			s.pop();
		}

		cout << str << endl;
		cout << res << endl;


	}

	return 0;
}