#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &nums)
{
    // Write your code here.
        n = nums.size();
        map<int,int> mp;
        for(auto it:nums) {
            mp[it]++;
        }
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto it:mp) {
            int num = it.first; // number
            int freq = it.second; // frequency
            pq.push({freq,num});
            if(pq.size() > k) {
                pq.pop();
            }
        }

        vector<int> ans;
        while (!pq.empty())
        {
            /* code */
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
}
