#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>

using namespace std;

struct Complex {
	int real;
	int imag;
	Complex(int a, int b) {
		real = a;
		imag = b;
	}
	bool operator< (const Complex& c) const {
		return real * real + imag * imag < c.real* c.real + c.imag * c.imag;
	}
};

int main() {

	int n;

	while (cin >> n) {
		priority_queue<Complex> q;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			if (s == "Pop") {
				if (q.empty()) {
					printf("empty\n");
				}
				else {
					Complex tmp = q.top();
					q.pop();
					printf("%d+i%d\n", tmp.real, tmp.imag);
					printf("SIZE = %d\n", q.size());
				}
			}
			else {
				int a, b;
				scanf("%d+i%d", &a, &b);
				q.push(Complex(a, b));
				printf("SIZE = %d\n", q.size());
			}
		}
	}



	return 0;
}