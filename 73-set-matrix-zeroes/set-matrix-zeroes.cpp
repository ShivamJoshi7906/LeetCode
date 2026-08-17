class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        size_t row_s = matrix.size();
        size_t col_s = matrix[0].size();
        vector<int> row(row_s, 0);
        vector<int> col(col_s, 0);
        for(int i =0;i<row_s;i++){
            for(int j=0;j<col_s;j++){
                if(matrix[i][j] == 0){
                    row[i] = -1;
                    col[j] = -1;
                }
            }
        }
        for(int i =0;i<row_s;i++){
            for(int j=0;j<col_s;j++){
                    if(row[i] == -1 || col[j] == -1){
                    matrix[i][j] = 0;
                }
                
            }
        }
    }
};