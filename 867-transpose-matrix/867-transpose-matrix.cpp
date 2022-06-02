class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        
        int m = A.size(), n = A[0].size();
        
        vector<vector<int>> Trans_A(n, vector<int>(m));
        
        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < n; c++)
            {
                Trans_A[c][r] = A[r][c];
            }
        }
        return Trans_A;
        
    }
};