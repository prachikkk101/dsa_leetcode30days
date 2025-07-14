class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int primaryDiagonal = 0;
        int secondaryDiagonal = 0;
        for(int i = 0; i<row ; i++){
            for(int j = 0; j<col ; j++){
                if(i==j){
                    primaryDiagonal += mat[i][j];
                }else if(j==row-i-1){
                        secondaryDiagonal += mat[i][row-i-1];
                    }
            }
        }
        int sum = primaryDiagonal + secondaryDiagonal;
        return sum;
            
        
    }
};
