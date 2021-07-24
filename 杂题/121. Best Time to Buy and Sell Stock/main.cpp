class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pm = prices[0];
        int res = 0;
        for (int i = 1; i < prices.size(); i++) {
            res = max(res, prices[i] - pm);
            pm = min(pm, prices[i]);
        }
        return res;
    }
};