// long countWaysToMakeChange(int *denominations, int n, int value)
// {
//     //Write your code here
// }
#include<bits/stdc++.h>
    	long long helper(int* coins,int n,int V, vector<vector<long long>>& dp) {
	    if(n==0) {
            if(V%coins[0]==0) return V/coins[0]; 
            else return 1e9;
            
	    }
	    if(dp[n][V]!=-1) return dp[n][V];
	    int notpick = 0+helper(coins,n-1,V,dp);
	    int pick = 1e9;
	    if(V-coins[n] >=0)
	     pick = 1+helper(coins,n,V-coins[n],dp);
	    return dp[n][V]=min(pick,notpick);
	}
    long long countWaysToMakeChange(int *coins, int n, int V) {
      //  int M = coins.size();
      int M = n;
        vector<vector<long long>> dp(M,vector<long long>(V+1,-1));
        int ans = helper(coins,M-1,V,dp);
      //  if(ans>=1e9) return -1; 
         return ans;
    }
