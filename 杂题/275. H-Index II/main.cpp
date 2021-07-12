class Solution {
public:
    int hIndex(vector<int>& citations) {
        int index = 1;
        for (int i = citations.size() - 1; i >= 0; i--) {
            if (citations[i] < index) break;
            index++;
        }
        return index-1;
    }
};