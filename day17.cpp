class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr1;
        set<int> s1;

        int n1 = nums1.size();
        int n2 = nums2.size();

        if (n2 < n1) {
            
            for (int i = 0; i < n2; i++) {
                s1.insert(nums2[i]);
            }
           
            for (int i = 0; i < n1; i++) {
                if (s1.count(nums1[i])) {
                    arr1.push_back(nums1[i]);
                    s1.erase(nums1[i]); 
                }
            }
        } else {
           
            for (int i = 0; i < n1; i++) {
                s1.insert(nums1[i]);
            }
           
            for (int i = 0; i < n2; i++) {
                if (s1.count(nums2[i])) {
                    arr1.push_back(nums2[i]);
                    s1.erase(nums2[i]); 
                }
            }
        }

        return arr1;
    }
};
