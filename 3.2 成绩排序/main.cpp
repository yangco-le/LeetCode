#include<bits/stdc++.h>
using namespace std;

struct Stu{
    string name;
    int score;
};

Stu s[1005];

bool cmpasc(Stu s1, Stu s2) {
    return s1.score < s2.score;
}

bool cmpdesc(Stu s1, Stu s2) {
    return s1.score > s2.score;
}

int main() {

    int n;
    int dir;

    while (cin >> n) {

        cin >> dir;

        for (int i = 0; i < n; i++) {
            cin >> s[i].name >> s[i].score;
        }

        if(dir == 1)
            stable_sort(s, s+n, cmpasc);
        else
            stable_sort(s, s+n, cmpdesc);

        for (int i = 0; i < n; i++) {
            cout << s[i].name << " " << s[i].score << endl;
        }
    }


    return 0;
}
