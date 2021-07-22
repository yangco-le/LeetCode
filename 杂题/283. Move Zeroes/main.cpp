class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lp = 0, rp = 0;
        while (rp < nums.size()) {
            if (nums[rp]) {
                swap(nums[lp], nums[rp]);
                lp++;
            }
            rp++;
        }
    }
};