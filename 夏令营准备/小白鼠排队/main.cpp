#include<bits/stdc++.h>
using namespace std;

struct mouse{
    int weight;
    string hat;
};

mouse num[105];

bool cmp(mouse a, mouse b) {
    return a.weight > b.weight;
}

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i].weight >> num[i].hat;
    }

    sort(num, num+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << num[i].hat << endl;
    }

    return 0;
}
