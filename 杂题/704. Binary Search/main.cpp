class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while (left < right) {
            int middle = left + (right - left) / 2;
            if (target == nums[middle]) return middle;
            if (target > nums[middle]) {
                left = middle + 1;
            }
            else if (target < nums[middle]) {
                right = middle;
            }
        }
        return -1;
    }
};