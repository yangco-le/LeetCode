#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

bool isprime[10005];
vector<int> prime;

int main() {

    for (int i = 2; i <= 10000; i++) isprime[i] = true;
    for (int i = 2; i <= 10000; i++) {
        if (!isprime[i]) continue;
        if (i % 10 == 1)
            prime.push_back(i);
        for (int j = i * i; j <= 10000; j += i) {
            isprime[j] = false;
        }
    }

    int n;
    while (cin >> n) {
        int i = 0;
        while (prime[i] < n) {
            cout << prime[i] << " ";
            i++;
        }
    }

    return 0;
}