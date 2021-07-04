#include<bits/stdc++.h>
using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Time {
    int y;
    int m;
    int d;
    Time(string s) {
        string s1 = s.substr(0, 4);
        string s2 = s.substr(4, 2);
        string s3 = s.substr(6, 2);
        y = stoi(s1);
        m = stoi(s2);
        d = stoi(s3);
    }
};

int Days(Time t) {
    int res = t.d;
    if (t.y % 4 == 0 && t.y % 100 != 0 || t.y % 400 == 0)
        month[2]++;
    for (int i = 0; i < t.m; i++) {
        res += month[i];
    }
    if (t.y % 4 == 0 && t.y % 100 != 0 || t.y % 400 == 0)
        month[2]--;
    return res;
}

int main() {

    string t1, t2;
    while (cin >>t1) {
        cin >> t2;
        if (t1 > t2) {
            string tmp = t1;
            t1 = t2;
            t2 = tmp;
        }
        Time a(t1);
        Time b(t2);

        int res = 0;
        for (int t = a.y; t < b.y; t++) {
            res += 365;
            if (t % 4 == 0 && t % 100 != 0 || t % 400 == 0) res++;
        }

        res = res + Days(b) - Days(a) + 1;
        cout << res << endl;
    }

//     Time t("20110101");
//     cout << t.y << " "<< t.m << " "<< t.d << endl;
//     cout << Days(t) <<endl;

    return 0;
}
