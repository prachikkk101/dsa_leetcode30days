class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxVal = nums[0];
        int idx = 0;

        // Find the maximum value and its index
        for (int i = 1; i < n; i++) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];
                idx = i;
            }
        }

        // Check if max is at least twice all others
        for (int i = 0; i < n; i++) {
            if (i != idx && maxVal < 2 * nums[i]) {
                return -1;
            }
        }

        return idx;
    }
};
