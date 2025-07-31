class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> str(n);  
        vector<int> duplicate = score;

        sort(duplicate.begin(), duplicate.end(), greater<int>()); 

        int largest = duplicate[0];
        int large2 = n > 1 ? duplicate[1] : -1;
        int large3 = n > 2 ? duplicate[2] : -1;

        for(int i = 0 ; i < n ; i++) {
            if(score[i] == largest) {
                str[i] = "Gold Medal";
            } else if(score[i] == large2) {
                str[i] = "Silver Medal";
            } else if(score[i] == large3) {
                str[i] = "Bronze Medal";
            } else {
                // find the position in sorted array
                for(int j = 3; j < n; j++) {
                    if(score[i] == duplicate[j]) {
                        str[i] = to_string(j + 1);
                        break;
                    }
                }
            }
        }
        return str;
    }
};
