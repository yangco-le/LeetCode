#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<queue>
#include<map>

using namespace std;

struct state {
    string str;
    int step;
    state(string a, int b) {
        str = a;
        step = b;
    }
};

int BFS(string str, int step) {
    queue<state> q;
    map<string, bool> m;
    q.push(state(str, step));
    m[str] = true;
    while (!q.empty()) {
        int step = q.front().step;
        string curr = q.front().str;
        q.pop();
        if (curr.find("2012") != string::npos) {
            return step;
        }
        for (int i = 0; i < curr.size() - 1; i++) {
            string str_n = curr;
            char c = str_n[i];
            str_n[i] = str_n[i+1];
            str_n[i+1] = c;
            if (m[str_n]) continue;
            m[str_n] = true;
            q.push(state(str_n, step+1));
        }
    }
    return -1;
}

int main() {

    int n;
    while (cin >> n) {
        string str;
        cin >> str;
        cout << BFS(str, 0) << endl;
    }

    return 0;
}