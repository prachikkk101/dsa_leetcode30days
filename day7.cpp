class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int col = accounts[0].size();
        int rstart = 0;
        int maxSum = INT_MIN; 
        
        while (rstart < row) {
            int sum = 0; 
            for (int i = 0; i < col; i++) {
                sum += accounts[rstart][i];
            }
            maxSum = max(maxSum, sum);
            rstart++;
        }

        return maxSum;
    }
};
