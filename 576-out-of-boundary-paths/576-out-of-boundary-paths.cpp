class Solution
{
    public:
        int m, n, Z = 1e9 + 7;
    int dp[52][52][52];

    int rec(int k, int i, int j)
    {
        if (i == m or i < 0 or j == n or j < 0) 
            return 1;
        
        if (k == 0) 
            return 0;

        if (dp[k][i][j] != -1) 
            return dp[k][i][j];

        int ans = 0;
        ans = (ans + rec(k - 1, i - 1, j)) % Z;
        ans = (ans + rec(k - 1, i + 1, j)) % Z;
        ans = (ans + rec(k - 1, i, j - 1)) % Z;
        ans = (ans + rec(k - 1, i, j + 1)) % Z;
        return dp[k][i][j] = ans;
    }

    int findPaths(int mm, int nn, int k, int i, int j)
    {
        m = mm;
        n = nn;
        memset(dp, -1, sizeof(dp));
        return rec(k, i, j);
    }
};