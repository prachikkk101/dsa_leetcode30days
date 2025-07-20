class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0,pos = 0;
        int n = nums.size();
        int max = 0;
        for(int i = 0 ; i<n ; i++){
            if(nums[i]>0){
                pos++;
            }
            else if(nums[i]<0){
                neg++;
            }
        }
        if(pos>neg){
            max = pos;
        }
        else{
            max = neg;
        }
        return max;
    }
};
