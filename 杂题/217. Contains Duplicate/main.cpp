class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> rec;
        for (auto i : nums) {
            rec[i]++;
            if (rec[i] > 1) return true;
        }
        return false;
    }
};