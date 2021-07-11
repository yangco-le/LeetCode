#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    while (cin >> s) {
        sort(s.begin(), s.end());
        cout << s << endl;
        for (; next_permutation(s.begin(), s.end());) {
            cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}
