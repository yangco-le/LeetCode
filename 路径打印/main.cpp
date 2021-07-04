#include<bits/stdc++.h>

using namespace std;

struct Dir {
    int level;
    map<string, Dir> kids;
    Dir() {
        level = 0;
    }
    Dir(int a) {
        level = a;
    }
};

void Print(Dir root) {
    for (auto it = root.kids.begin(); it != root.kids.end(); it++) {
        for (int i = 0; i < root.level; i++) cout << "  ";
        cout << it->first << endl;
        Print(it->second);
    }
}

int main() {

    int n;
    string path;
    while (cin >> n) {
        if (n == 0) continue;
        Dir root(0);
        while(n--){
            cin>>path;
            int pos=0, end=0; Dir* p = &root;
            while(pos<path.size()){  // ��ȡ����Ŀ¼���Ʋ�����Ŀ¼��
                end = path.find('\\', pos);
                if(end == string::npos) end = path.size()+1;  // �߽紦��
                const string& cwd = path.substr(pos, end-pos);  // Ŀ¼����ȡ
                if(p->kids.find(cwd) == p->kids.end()) // ��ѯ������
                    p->kids[cwd] = Dir(p->level+1);
                pos = end+1; p = &(p->kids[cwd]);
            }
        }

        Print(root);
        cout << endl;
    }

    return 0;
}
