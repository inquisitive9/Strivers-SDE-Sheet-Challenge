#include <bits/stdc++.h> 
bool isPalindrome(string& s,int i,int j) {
        while(i<=j) {
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    int palindromePartitioning(string s)
    {
        // code here
        int n = s.size();
        vector<int> dp(n+1,0);
        for(int i = n-1 ; i>=0 ;i--) {
            int mncost = INT_MAX;
            for(int j = i ; j < s.size() ;j++) {
            if(isPalindrome(s,i,j)) {
                int cost = 1 + dp[j+1];
                mncost = min(cost,mncost);
            }
          }
          dp[i] = mncost ;
        }
        return dp[0]-1;
    }
