class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        vector<int> rec(nums1);
        sort(rec.begin(), rec.end());
        int maxn = 0;
        int mod = 1e9 + 7;
        int sum = 0;
        for (int i = 0; i < nums1.size(); i++) {
            int d1 = abs(nums1[i] - nums2[i]);
            sum = (sum + d1) % mod;
            int index = lower_bound(rec.begin(), rec.end(), nums2[i]) - rec.begin();
            if (index < nums1.size()) {
                int d2 = abs(rec[index] - nums2[i]);
                maxn = max(maxn, d1 - d2);
            }
            if (index != 0) {
                int d2 = abs(rec[index - 1] - nums2[i]);
                maxn = max(maxn, d1 - d2);
            }
        }
        return (sum - maxn + mod) % mod;
    }
};