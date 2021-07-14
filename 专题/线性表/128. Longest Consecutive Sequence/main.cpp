class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> mp;
        for(auto i : nums) mp[i] = false;

        int res = 0;
        for (auto i : nums) {
            if (mp[i]) continue;

            mp[i] = true;
            int length = 1;
            for (int j = i + 1; mp.find(j) != mp.end(); j++) {
                mp[j] = true;
                length++;
            }
            for (int j = i - 1; mp.find(j) != mp.end(); j--) {
                mp[j] = true;
                length++;
            }

            res = max(res, length);
        }

        return res;
    }
};