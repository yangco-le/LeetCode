#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>

using namespace std;

const int MAXN = sqrt(1e9);
bool isPrime[40000];
vector<int> prime;

void Initial() {
    for (int i = 2; i <= MAXN; i++) {
        isPrime[i] = true;
    }
    for (int i = 2; i <= MAXN; i++) {
        if (!isPrime[i]) continue;
        prime.push_back(i);
        for (int j = i * i; j <= MAXN; j += i) {
            isPrime[j] = false;
        }
    }
}

int main() {

    Initial();
    int n;
    while (cin >> n) {
        int ans = 0;
        for (int i = 0; i < prime.size() && prime[i] < n; i++) {
            int factor = prime[i];
            while (n % factor == 0) {
                n /= factor;
                ans++;
            }
        }
        if (n > 1) {
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}