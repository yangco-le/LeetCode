#include<iostream>
#include<cstdio>
#include<cstring>

#define ll long long 
using namespace std;

ll Function(int n) {
	if (n == 1) return 2;
	return 3 * Function(n - 1) + 2;
}


int main() {

	int n;
	while (cin >> n) {
		cout << Function(n) << endl;
	}

	return 0;
}