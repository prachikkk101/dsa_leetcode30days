class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec;
        for(int i = 0 ; i < n ; i++) {
            int count = 0;
            for(int j = 0 ; j < n ; j++) {
                if(i != j && nums[j] < nums[i]) {
                    count++;
                }
            }
            vec.push_back(count); // push once after counting
        }
        return vec;
    }
};
