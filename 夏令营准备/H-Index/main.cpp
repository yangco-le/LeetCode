class Solution {
public:
    int hIndex(vector<int>& citations) {

        sort(citations.begin(), citations.end(), greater<int>());

        int index = 0;

        while (index < citations.size() && citations[index] >= index + 1) {
            index++;
        }

        return index;

    }
};