#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
     int res = 0;
        int j = 0;
        int len = 0;
        unordered_map<char,int> mp;
        int n = s.size();
        for(int i = 0 ; i < s.size() ;i++) {
            mp[s[i]]++;
            int len = i-j+1;
            while(mp.size() < len) {
                mp[s[j]]--;
                if(mp[s[j]] == 0) {
                    mp.erase(s[j]);
                }
                j++;
                len = i-j+1;
            }
            res = max(res,len);
        }
        return res;
}
