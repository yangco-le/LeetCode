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

void Insert(TreeNode** root, int x) {
	if (*root == NULL) {
		*root = new TreeNode(x);
		return;
	}
	else if (x == (*root)->data) {
		return;
	}
	else if (x < (*root)->data) {
		Insert(&((*root)->lc), x);
	}
	else {
		Insert(&((*root)->rc), x);
	}
	return;
}

void PreOrder(TreeNode* root) {
	if (root == NULL) return;
	cout << root->data << " ";
	PreOrder(root->lc);
	PreOrder(root->rc);
}

void InOrder(TreeNode* root) {
	if (root == NULL) return;
	InOrder(root->lc);
	cout << root->data << " ";
	InOrder(root->rc);
}

void PostOrder(TreeNode* root) {
	if (root == NULL) return;
	PostOrder(root->lc);
	PostOrder(root->rc);
	cout << root->data << " ";
}

int main() {

	int n, tmp;
	while (cin >> n) {
		TreeNode* root = NULL;
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			Insert(&root, tmp);
		}

		PreOrder(root); cout << endl;
		InOrder(root); cout << endl;
		PostOrder(root); cout << endl;
	}

	return 0;
}