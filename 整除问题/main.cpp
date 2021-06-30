#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<map>
#include<algorithm>

using namespace std;

vector<int> prime;
bool isPrime[1005];

void Initial() {
    for (int i = 2; i <= 1000; i++) {
        isPrime[i] = true;
    }
    for (int i = 2; i <= 1000; i++) {
        if (!isPrime[i]) continue;
        prime.push_back(i);
        for (int j = i * i; j <= 1000; j += i) {
            isPrime[j] = false;
        }
    }
}

int main() {

    Initial();

    int n, a;
    while (cin >> n >> a) {

        map<int, int> nmap;
        map<int, int> amap;

        for (int i = 0; i < prime.size() && prime[i] <= n; i++) {
            int base = prime[i];
            while (n >= base) {
                nmap[prime[i]] += n / base;
                base *= prime[i];
            }
        }

        for (int i = 0; i < prime.size() && prime[i] <= a; i++) {
            while (a % prime[i] == 0) {
                amap[prime[i]]++;
                a /= prime[i];
            }
        }

        int res = 0x7fffffff;
        for (auto it = amap.begin(); it != amap.end(); it++) {
            if (it->second > nmap[it->first]) { res = 0; break; }
            int t = nmap[it->first] / it->second;
            res = min(res, t);
        }

        cout << res << endl;
    }


    return 0;
}