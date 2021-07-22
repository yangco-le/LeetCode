class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int, int> rec;
        for (auto i : nums) {
            if (++rec[i] > 1) return i;
        }
        return 0;
    }
};