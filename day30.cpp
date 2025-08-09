class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // ascending order
        int p1 = nums[nums.size() - 1] * nums[nums.size() - 2]; // two largest
        int p2 = nums[0] * nums[1]; // two smallest
        return p1 - p2;
    }
};
