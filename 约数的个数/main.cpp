#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

vector<int> prime;
bool isPrime[40000];
const int MAXN = sqrt(1e9) + 1;

void Initial() {
    for (int i = 2; i < MAXN; i++) {
        isPrime[i] = true;
    }
    for (int i = 2; i < MAXN; i++) {
        if (!isPrime[i]) continue;
        prime.push_back(i);
        for (int j = i * i; j < MAXN; j += i) {
            isPrime[i] = false;
        }
    }
}

int Count(int x) {
    vector<int> res;
    for (int i = 0; i < prime.size() && prime[i] <= x; i++) {
        if (x % prime[i] != 0) continue;
        int cnt = 0;
        while (x % prime[i] == 0) {
            cnt++;
            x /= prime[i];
        }
        res.push_back(cnt);
    }
    if (x > 1) res.push_back(1);

    int ans = 1;
    for (int i = 0; i < res.size(); i++) {
        ans *= (res[i] + 1);
    }
    return ans;
}

int main() {

    Initial();
    int N;
    while (cin >> N) {
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            cout << Count(x) << endl;
        }
    }

    return 0;
}