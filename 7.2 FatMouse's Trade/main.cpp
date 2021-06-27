#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct JavaBean {
	double weight;
	double cost;
};

bool cmp(JavaBean a, JavaBean b) {
	return a.weight / a.cost > b.weight / b.cost;
}

JavaBean arr[1005];

int main() {

	int amount, n;
	while (cin >> amount >> n) {
		if (amount == -1 && n == -1) break;
		for (int i = 0; i < n; i++) {
			cin >> arr[i].weight >> arr[i].cost;
		}

		sort(arr, arr + n, cmp);

		double res = 0;
		for (int i = 0; i < n; i++) {
			if (amount >= arr[i].cost) {
				amount -= arr[i].cost;
				res += arr[i].weight;
			}
			else {
				res += amount * arr[i].weight / arr[i].cost;
				printf("%.3lf\n", res);
				break;
			}
		}

	}

	return 0;
}