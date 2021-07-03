class Solution {
public:
    string frequencySort(string s) {
        struct pair{
            char c;
            int cnt;
            pair(char a, int n) {
                c= a;
                cnt = n;
            }
            bool operator< (const pair& p) const {
                return cnt < p.cnt;
            }
        };
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        priority_queue<pair> q;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            q.push(pair(it->first, it->second));
        }
        string res = "";
        while (!q.empty()) {
            res += string(q.top().cnt, q.top().c);
            q.pop();
        }
        return res;
    }
};