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

TreeNode* Insert(TreeNode* root, int x, int father) {
	if (root == NULL) {
		cout << father << endl;
		root = new TreeNode(x);
		return root;
	}
	else if (x < root->data) {
		root->lc = Insert(root->lc, x, root->data);
	}
	else {
		root->rc = Insert(root->rc, x, root->data);
	}
	return root;
}

int main() {

	int n;
	cin >> n;
	
	int tmp;
	TreeNode* root = NULL;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		root = Insert(root, tmp, -1);
	}
	cout << endl;

	return 0;
}