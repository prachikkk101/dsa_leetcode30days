class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        int minSum = INT_MAX;

       
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int cost = prices[i] + prices[j];
                if (cost < minSum) {
                    minSum = cost;
                }
            }
        }

      
        if (minSum <= money) {
            return money - minSum; 
        } else {
            return money;
        }
    }
};
