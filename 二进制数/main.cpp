#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main() {

    int res[105];
    unsigned int n;
    while (cin >> n) {
        int index = 0;
        while (n != 0) {
            res[index++] = n % 2;
            n /= 2;
        }

        for (int i = index - 1; i >= 0; i--) {
            cout << res[i];
        }
        cout << endl;
    }

    return 0;
}