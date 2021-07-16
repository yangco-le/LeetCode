class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int, int> rec;
        for (auto i : nums) rec[i]++;
        return rec[target];
    }
};