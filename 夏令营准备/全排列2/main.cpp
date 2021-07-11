class Solution {
public:

    bool visit[7];

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        for (int i = 0; i < 7; i++) visit[i] = false;
        dfs(res, nums, path);
        return res;
    }

    void dfs(vector<vector<int>> &res, vector<int>& nums, vector<int> path) {
        if (path.size() == nums.size()) {
            res.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (visit[i]) continue;
            vector<int> tmp = path;
            tmp.push_back(nums[i]);
            visit[i] = true;
            dfs(res, nums, tmp);
            visit[i] = false;
        }
    }
};