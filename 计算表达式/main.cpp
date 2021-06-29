#include<iostream>
#include<stack>
#include<cstdio>
#include<cctype>
#include<string>

using namespace std;

int GetNumber(string str, int& index) {
    int start = index;
    while (isdigit(str[index])) index++;
    string sub = str.substr(start, index);
    return stoi(sub);
}

int Priority(char c) {
    if (c == '#') return 1;
    else if (c == '$') return 2;
    else if (c == '+' || c == '-') return 3;
    else return 4;
}

double Cal(double x, double y, char op) {
    if (op == '+') return x + y;
    else if (op == '-') return x - y;
    else if (op == '*') return x * y;
    else return x / y;
}

int main() {

    string str;
    while (cin >> str) {
        stack<char> op;
        op.push('#');
        str += '$';
        stack<double> num;
        int index = 0;
        while (index < str.size()) {
            if (isdigit(str[index])) {
                num.push(GetNumber(str, index));
            }
            else {
                if (Priority(str[index]) > Priority(op.top())) {
                    op.push(str[index]);
                    index++;
                }
                else {
                    double y = num.top(); num.pop();
                    double x = num.top(); num.pop();
                    char oper = op.top(); op.pop();
                    num.push(Cal(x, y, oper));
                }
            }
        }
        cout << num.top() << endl;
    }

    return 0;
}