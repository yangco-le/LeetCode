#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>

using namespace std;

string Divide(string str, int x) {
	int remainder = 0;
	for (int i = 0; i < str.size(); i++) {
		int current = remainder * 10 + str[i] - '0';
		str[i] = current / x + '0';
		remainder = current % x;
	}
	int pos = 0;
	while (str[pos] == '0') {
		pos++;
	}
	return str.substr(pos);
}

int main() {

	string str;
	while (cin >> str) {
		vector<int> binary;
		while (str != "") {
			int last = str[str.size() - 1] - '0';
			binary.push_back(last % 2);
			str = Divide(str, 2);
		}
		for (int i = binary.size() - 1; i >= 0; i--) {
			cout << binary[i];
		}
		cout << endl;
	}

	return 0;
}