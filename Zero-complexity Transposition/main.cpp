#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

int main() {

    int n;
    cin >> n;

    stack<int> s;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        s.push(tmp);
    }

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }


    return 0;
}