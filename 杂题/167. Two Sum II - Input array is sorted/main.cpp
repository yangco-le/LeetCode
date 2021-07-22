class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0, j = numbers.size() - 1; i < j;) {
            if (numbers[i] + numbers[j] == target) return {i + 1, j + 1};
            if (numbers[i] + numbers[j] < target) i++;
            if (numbers[i] + numbers[j] > target) j--;
        }
        return {-1, -1};
    }
};