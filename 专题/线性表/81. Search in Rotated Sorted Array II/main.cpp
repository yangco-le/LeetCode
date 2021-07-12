class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int first = 0; int last = nums.size(), mid;
        while (first != last) {
            mid = first + (last - first) / 2;
            if (nums[mid] == target) return true;
            if (nums[first] < nums[mid]) {
                if (nums[first] <= target && target < nums[mid]) {
                    last = mid;
                }
                else {
                    first = mid + 1;
                }
            }
            else if (nums[mid] < nums[first]){
                if (nums[mid] <= target && target <= nums[last-1]) {
                    first = mid + 1;
                }
                else {
                    last = mid;
                }
            }
            else {
                first++;
            }
        }
        return false;
    }
};