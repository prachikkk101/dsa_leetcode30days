class Solution {
public:
    bool searchInCol(vector<vector<int>>& matrix, int target, int row) {
        int cols = matrix[0].size();
        int start = 0, end = cols - 1;
        while (start <= end) {
            int mid1 = start + (end - start) / 2;
            if (target == matrix[row][mid1]) {
                return true;
            } else if (target < matrix[row][mid1]) {
                end = mid1 - 1;
            } else {
                start = mid1 + 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int st = 0, end = row - 1;

        while (st <= end) {  
            int mid = st + (end - st) / 2;
            if (target >= matrix[mid][0] && target <= matrix[mid][col - 1]) {
                return searchInCol(matrix, target, mid);
            } else if (target < matrix[mid][0]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return false;
    }
};
