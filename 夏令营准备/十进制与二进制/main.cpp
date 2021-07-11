#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>

using namespace std;

string Devide(string str, int x) {
	int remainder = 0;
	for (int i = 0; i < str.size(); i++) {
		int curr = remainder * 10 + str[i] - '0';
		str[i] = curr / x + '0';
		remainder = curr % x;
	}
	int pos = 0;
	while (str[pos] == '0') {
		pos++;
	}
	return str.substr(pos);
}

string Multiply(string str, int x) {
	int remainder = 0;
	for (int i = str.size() - 1; i >= 0; i--) {
		int curr = x * (str[i] - '0') + remainder;
		str[i] = curr % 10 + '0';
		remainder = curr / 10;
	}
	if (remainder) str =  '1' + str;
	return str;
}

string Add(string str, int x) {
	int remainder = x;
	for (int i = str.size() - 1; i >= 0; i--) {
		int curr = str[i] - '0' + remainder;
		str[i] = curr % 10 + '0';
		remainder = curr / 10;
	}
	if (remainder) str =  '1' + str;
	return str;
}

int main() {

	string str;
	while (cin >> str) {
		vector<int> res;
		while (str != "") {
			int last = str[str.size() - 1] - '0';
			res.push_back(last % 2);
			str = Devide(str, 2);
		}
		string ans = "0";
		for (int i = 0; i < res.size(); i++) {
			ans = Multiply(ans, 2);
			ans = Add(ans, res[i]);
		}
		cout << ans << endl;
		
	}

	return 0;
}