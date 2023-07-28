  int helper(int i,int j,vector<vector<int>>& dp) {
        if(i == 0 && j ==0) {
            return 1;
        }
        if(i<0 || j <0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int l = helper(i-1,j,dp);
        int r = helper(i,j-1,dp);
        return dp[i][j] = l + r;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        if(m==1 || n==1 ) {
            return 1;
        }
        int N = m+n-2;
        int r = m-1;
        double ans = 1.0;
        for(int i = 1; i <=(m-1) ;i++) {
            ans=((ans)*(N-r+i))/i ;
        }
        return (int)ans;
    }
