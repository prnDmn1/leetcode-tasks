class NumMatrix {
    vector<vector<int>> presum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        presum = vector<vector<int>>(n + 1, vector<int>(m + 1, 0));
        for (auto i = 1; i < n + 1; i++)
            for (auto j = 1; j < m + 1; j++)
                presum[i][j] = matrix[i - 1][j - 1] 
                + presum[i - 1][j] + presum[i][j - 1] - presum[i - 1][j - 1];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return presum[row2 + 1][col2 + 1] 
        - presum[row1][col2 + 1] - presum[row2 + 1][col1] + presum[row1][col1];
    }
};



/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */