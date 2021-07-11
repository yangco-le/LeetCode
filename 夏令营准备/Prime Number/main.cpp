#include<bits/stdc++.h>

using namespace std;

bool isPrime[110001];
vector<int> prime;

void Initial() {
    for (int i = 2; i <= 110000; i++) {
        isPrime[i] = true;
    }

    for (int i = 2; i <= 110000; i++) {
        if (!isPrime[i]) continue;
        prime.push_back(i);
        for (int j = i * i; j <= 110000; j+=i) {
            isPrime[j] = false;
        }
    }
}

int main() {
    int k;
    Initial();
    while (cin >> k) {
        cout << prime[k-1] << endl;
    }
    return 0;
}
