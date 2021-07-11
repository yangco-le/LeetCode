#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

struct TreeNode {
	char data;
	TreeNode* LeftChild;
	TreeNode* RightChild;
	TreeNode(char c) : data(c), LeftChild(NULL), RightChild(NULL) {}
};

TreeNode* Build(int& pos, string str) {
	char c = str[pos++];
	if (c == '#') return NULL;
	TreeNode* root = new TreeNode(c);
	root->LeftChild = Build(pos, str);
	root->RightChild = Build(pos, str);
	return root;
}

void InOrder(TreeNode* root) {
	if (root == NULL) {
		return;
	}
	InOrder(root->LeftChild);
	cout << root->data<< " ";
	InOrder(root->RightChild);
	return;
}

int main() {

	string str;
	while (cin >> str) {
		int pos = 0;
		TreeNode* root = Build(pos, str);
		InOrder(root);
		cout << endl;
	}

	return 0;
}