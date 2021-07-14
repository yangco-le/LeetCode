class Solution {
public:
    int find_kth(vector<int>::iterator it1, int m, vector<int>::iterator it2, int n, int k) {
        // always assume that m is equal or smaller than n
        if (m > n) return find_kth(it2, n, it1, m, k);
        if (m == 0) return *(it2 + k - 1);
        if (k == 1) return min(*it1, *it2);

        // deivde k into two parts
        int ia = min(k / 2, m), ib = k - ia;
        if (*(it1 + ia - 1) < *(it2 + ib - 1)) 
            return find_kth(it1 + ia, m - ia, it2, n, k - ia);
        else if (*(it1 + ia -1) > *(it2 + ib - 1)) 
            return find_kth(it1, m, it2 + ib, n - ib, k - ib);
        else 
            return *(it1 + ia -1);
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m + n;
        if (total % 2 == 1) return find_kth(nums1.begin(), m, nums2.begin(), n, total / 2 + 1);
        else return (find_kth(nums1.begin(), m, nums2.begin(), n, total / 2)
                     + find_kth(nums1.begin(), m, nums2.begin(), n, total / 2 + 1)) / 2.0;
    }
};