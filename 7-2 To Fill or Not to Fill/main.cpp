#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

struct sta {
	double pi;
	int di;
	bool operator < (const sta& b) const {
		return pi < b.pi;
	}
};

sta arr[505];

int main() {

	int cmax, d, davg, n;
	double sum;

	while (cin >> cmax >> d >> davg >> n) {
		for (int i = 0; i < n; i++) {
			cin >> arr[i].pi >> arr[i].di;
		}
		sort(arr, arr + n);

		sum = 0;
		bool flag[30005] = { false };
		int max = cmax * davg;
		for (int i = 0; i < n; i++) {
			int end = (arr[i].di + max > d) ? d : arr[i].di + max;
			int cnt = 0;
			for (int j = arr[i].di; j < end; j++) {
				if (flag[j] == false) {
					flag[j] = true;
					cnt++;
				}
			}
			sum += cnt / (davg * 1.0) * arr[i].pi;
		}
		int i;
		for (i = 0; i < d; i++) {
			if (flag[i] == false) {
				printf("The maximum travel distance = %.2lf\n", (double)i);
				break;
			}
		}
		if (i == d) {
			printf("%.2lf\n", sum);
		}
	}

	return 0;
}