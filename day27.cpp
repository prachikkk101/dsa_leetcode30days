class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        int n = nums.size();
        int st = 0;
        for(int i = 0 ; i<n ; i++){
            if(i%2 != 0){
                odd.push_back(nums[i]);
            }else{
                even.push_back(nums[i]);
            }
        }
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(),even.end());
        int e = 0,o = 0;
        st = 0;
        while(st<n){
            if(st%2 != 0){
                nums[st] = odd[o];
                o++;
            }else{
                nums[st] = even[e];
                e++;
            }
            st++;
        }
        return nums;
    }
};
