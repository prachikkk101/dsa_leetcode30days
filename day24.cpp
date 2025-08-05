class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int x = 0; x <= n; ++x) {
            int count = 0;
            for(int i = 0; i < n; ++i) {
                if(nums[i] >= x) {
                    count = n - i; // from current index to end, all are >= x
                    break;
                }
            }
            if(count == x) return x;
        }
        return -1;
    }
};
