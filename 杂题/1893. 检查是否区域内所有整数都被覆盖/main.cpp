class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> diff(52, 0);   // 差分数组
        for (auto&& range: ranges){
            ++diff[range[0]];
            --diff[range[1]+1];
        }
        // 前缀和
        int curr = 0;
        for (int i = 1; i <= 50; ++i){
            curr += diff[i];
            if (i >= left && i <= right && curr <= 0){
                return false;
            }
        }
        return true;
    }
};