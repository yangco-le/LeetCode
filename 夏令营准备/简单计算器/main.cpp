#include<iostream>
#include<cstdio>
#include<cctype>
#include<stack>
#include<string>

using namespace std;

int Priority(char c) {
	if (c == '#') return 0;
	else if (c == '$') return 1;
	else if (c == '+' || c == '-') return 2;
	else return 3;
}

int GetNumber(string str, int& index) {
	int start = index;
	while (isdigit(str[index])) index++;
	string sub = str.substr(start, index - start);
	return stoi(sub);
	//     double number = 0;
	//     while(isdigit(str[index])) {
	//         number = number * 10 + str[index] -'0';
	//         index++;
	//     }
	//     return number;
}

double Calculate(double x, double y, char op) {
	if (op == '+') return x + y;
	else if (op == '-') return x - y;
	else if (op == '*') return x * y;
	else if (op == '/') return x / y;
	else return 0;
}

int main() {


	string str;
	while (getline(cin, str)) {
		if (str == "0") break;

		stack<char> oper;
		stack<double> data;

		oper.push('#');
		str += '$';

		int i = 0;
		while (i < str.size()) {
			if (str[i] == ' ') i++;
			else if (isdigit(str[i])) data.push(GetNumber(str, i));
			else {
				if (Priority(oper.top()) < Priority(str[i])) {
					oper.push(str[i]);
					i++;
				}
				else {
					double y = data.top();
					data.pop();
					double x = data.top();
					data.pop();
					data.push(Calculate(x, y, oper.top()));
					oper.pop();
				}
			}
		}

		printf("%.2lf\n", data.top());

	}



	return 0;
}