#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

struct TreeNode {
	int data;
	TreeNode* lc;
	TreeNode* rc;
	TreeNode(int d) {
		data = d;
		lc = NULL;
		rc = NULL;
	}
};

void Insert(TreeNode** root, int x, int father) {
	if (*root == NULL) {
		cout << father << endl;
		*root = new TreeNode(x);
		return;
	}
	else if (x < (*root)->data) {
		Insert(&((*root)->lc), x, (*root)->data);
	}
	else {
		Insert(&((*root)->rc), x, (*root)->data);
	}
	return;
}

int main() {

	int n;
	cin >> n;

	int tmp;
	TreeNode* root = NULL;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		Insert(&root, tmp, -1);
	}
	cout << endl;

	return 0;
}