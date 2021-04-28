#include<bits/stdc++.h>
using namespace std;

struct Stu{
    int id;
    int score;
};

Stu s[105];

bool cmp(Stu s1, Stu s2) {
    if(s1.score == s2.score) return s1.id < s2.id;
    else return s1.score < s2.score;
}

int main() {

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s[i].id >> s[i].score;
    }

    sort(s, s+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << s[i].id << " " << s[i].score << endl;
    }


    return 0;
}
