class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        // method 1, O(nlogn)
        // map<int, int> rec;
        // for (auto i : arr) rec[i]++;
        // int res = 0;
        // for (auto it = rec.begin(); it != rec.end(); it++) {
        //     res = min(res + it->second, it->first);
        // }
        // return res;

        // method 2, O(n)
        int n = arr.size();
        vector<int> rec(n + 1);
        for (int i : arr) rec[min(i, n)]++;
        int miss = 0;
        for (int i = 1; i <= n; i++) {
            if (rec[i] == 0) miss++;
            else {
                miss = max(miss - rec[i] + 1, 0);
            }
        }
        return n - miss; 
    }
};