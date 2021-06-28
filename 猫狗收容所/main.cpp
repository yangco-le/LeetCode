#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

struct animal {
	int id;
	int time;
	animal(int a, int b) {
		id = a;
		time = b;
	}
};

int main() {

	int n;
	cin >> n;

	queue<animal> dog;
	queue<animal> cat;

	for (int i = 0; i < n; i++) {
		int m, t;
		cin >> m >> t;
		if (m == 1) {
			if (t > 0) {
				dog.push(animal(t, i));
			}
			else if (t < 0) {
				cat.push(animal(t, i));
			}
		}
		else if (m == 2) {
			if (t == 1 && !dog.empty()) {
				cout << dog.front().id << " ";
				dog.pop();
			}
			else if (t == -1 && !cat.empty()) {
				cout << cat.front().id << " ";
				cat.pop();
			}
			else if (t == 0) {
				if (dog.empty() && !cat.empty()) {
					cout << cat.front().id << " ";
					cat.pop();
				}
				else if (cat.empty() && !dog.empty()) {
					cout << dog.front().id << " ";
					dog.pop();
				}
				else if (dog.front().time < cat.front().time && !dog.empty() && !cat.empty()) {
					cout << dog.front().id << " ";
					dog.pop();
				}
				else if (!dog.empty() && !cat.empty()) {
					cout << cat.front().id << " ";
					cat.pop();
				}
			}
		}
	}

	return 0;
}