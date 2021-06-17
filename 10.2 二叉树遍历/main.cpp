#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

struct TreeNode {
	char data;
	TreeNode* lchild;
	TreeNode* rchild;
	TreeNode(char c) :data(c), lchild(NULL), rchild(NULL) {}
};

TreeNode* Build(string s1, string s2) {
	if (s1.size() == 0) return NULL;
	char c = s1[0];
	TreeNode* root = new TreeNode(c);
	int pos = s2.find(c);
	root->lchild = Build(s1.substr(1, pos), s2.substr(0, pos));
	root->rchild = Build(s1.substr(pos + 1), s2.substr(pos + 1));
	return root;
}

void PostOrder(TreeNode* root) {
	if (root == NULL) return;
	PostOrder(root->lchild);
	PostOrder(root->rchild);
	cout << root->data;
	return;
}

int main() {

	string s1, s2;
	while (cin >> s1 >> s2) {
		TreeNode* root = Build(s1, s2);
		PostOrder(root);
		cout << endl;
	}

	return 0;
}