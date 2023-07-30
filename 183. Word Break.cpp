#include <bits/stdc++.h> 
    bool helper(string s, vector<string>& wordDict,int idx,map<string,int>& mp,vector<int>& dp) {
        
        if(idx >= s.size()) {
            return true;
        }

        if(dp[idx] != -1) {
            return dp[idx];
        }
        
        for(int i = idx ; i < s.size() ;i++) {
            if(mp.count(s.substr(idx,i-idx+1))) {
                if(helper(s,wordDict,i+1,mp,dp)) {
                    return dp[idx] = true;
                }
            }
        }

        return dp[idx] = false;
    }
bool wordBreak(vector < string > & wordDict, int n, string & s) {
    // Write your code here.
            map<string,int> mp;
        for(auto word:wordDict) {
            mp[word]++;
        }
        vector<int> dp(s.size()+1,-1);
        return helper(s,wordDict,0,mp,dp);
}
