#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;


int main() {

    vector<int> v1;
    vector<int> v2;

    for (int i = 2; i <= 60; i++) {
        int res = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) res += j;
        }
        if (res == i) v1.push_back(i);
        else if (res > i) v2.push_back(i);
    }

    cout << "E:";
    for (int i = 0; i < v1.size(); i++) {
        cout << " " << v1[i];
    }
    cout << endl;
    cout << "G:";
    for (int i = 0; i < v2.size(); i++) {
        cout << " " << v2[i];
    }

    return 0;
}