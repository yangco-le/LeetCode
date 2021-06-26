#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

struct TreeNode {
	char data;
	TreeNode* lc;
	TreeNode* rc;
	TreeNode(char d) {
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

void PreOrder(TreeNode* root, string &s) {
	if (root == NULL) return;
	s += root->data;
	PreOrder(root->lc, s);
	PreOrder(root->rc, s);
}

void InOrder(TreeNode* root, string &s) {
	if (root == NULL) return;
	InOrder(root->lc, s);
	s += root->data;
	InOrder(root->rc, s);
}

bool PreCompare(TreeNode* rt1, TreeNode* rt2) {
	string s1="", s2="";
	PreOrder(rt1, s1);
	PreOrder(rt2, s2);
	if (s1 == s2) return true;
	else return false;
}

bool InCompare(TreeNode* rt1, TreeNode* rt2) {
	string s1 = "", s2 = "";
	InOrder(rt1, s1);
	InOrder(rt2, s2);
	if (s1 == s2) return true;
	else return false;
}

int main() {

	int n;
	string str, str1;
	cin >> n;
	TreeNode* rt1 = NULL;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		Insert(&rt1, str[i]);
	}
	for (int i = 0; i < n; i++) {
		TreeNode* rt2 = NULL;
		cin >> str1;
		for (int j = 0; j < str1.size(); j++) {
			Insert(&rt2, str1[j]);
		}
		if (PreCompare(rt1, rt2) && InCompare(rt1, rt2)){
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}



	return 0;
}