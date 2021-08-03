// class Solution {
// public:
//     int findUnsortedSubarray(vector<int>& nums) {
//         if(nums.size() == 1) return 0;

//         int i = 0, j = nums.size() - 1;
//         while (i < nums.size() - 1 && nums[i+1] >= nums[i]) i++;
//         if (i == nums.size() - 1) return 0;
//         while (j > 0 && nums[j-1] <= nums[j]) j--;
//         int mi = INT_MAX, ma = INT_MIN;
//         for (int k = i; k <= j; k++) {
//             mi = min(mi, nums[k]);
//             ma = max(ma, nums[k]);
//         }
//         while (i > 0 && nums[i-1] > mi) i--;
//         while (j < nums.size() - 1 && nums[j+1] < ma) j++;

//         return j - i + 1;
//     }
// };

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxn = INT_MIN, right = -1;
        int minn = INT_MAX, left = -1;
        for (int i = 0; i < n; i++) {
            if (maxn > nums[i]) {
                right = i;
            } else {
                maxn = nums[i];
            }
            if (minn < nums[n - i - 1]) {
                left = n - i - 1;
            } else {
                minn = nums[n - i - 1];
            }
        }
        return right == -1 ? 0 : right - left + 1;
    }
};