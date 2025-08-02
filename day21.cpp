class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        int st = 0;
        int end = nums.size();

       
        while(st < end) {
            if(nums[st] % 2 == 0) {
                even.push_back(nums[st]);
            } else {
                odd.push_back(nums[st]);
            }
            st++;
        }

        
        st = 0;
        int i = 0, j = 0;

        while(st < end) {
            if(st % 2 == 0) {
                nums[st] = even[i];
                i++;
            } else {
                nums[st] = odd[j];
                j++;
            }
            st++;
        }

        return nums;
    }
};
