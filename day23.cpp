class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        sort(salary.begin(), salary.end());

        double max = salary.back();    
        double min = salary[0];      
        double sum = 0;

        int count = 0;                
        int st = 0;
        while(st < n){
            count++;
            st++;
        }

        for(int i = 0 ; i<n ; i++){
            sum += salary[i];         
        }

        double avg = (sum - min - max) / (count - 2);  
        return avg;
    }
};
