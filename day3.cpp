class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();

        if (row * col != r * c)
            return mat;

        vector<vector<int>> matrix(r, vector<int>(c));  

        int newRow = 0, newCol = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                matrix[newRow][newCol] = mat[i][j];
                newCol++;

                if (newCol == c) {
                    newCol = 0;
                    newRow++;
                }
            }
        }

        return matrix;
    }
};
