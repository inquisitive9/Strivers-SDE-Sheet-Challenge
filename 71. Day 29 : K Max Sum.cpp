#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	vector<int> ans;
	set<pair<int,int>> vis;
	sort(a.begin(),a.end(),greater<int>());
	sort(b.begin(),b.end(),greater<int>());
	priority_queue<pair<int,pair<int,int>>> pq;
	pq.push({a[0]+b[0],{0,0}});
	while(!pq.empty()) {
        auto front = pq.top();
		pq.pop();
        int first = front.first;
        int i = front.second.first;
        int j = front.second.second;
      //  if(vis.count({i,j})) continue;
        ans.push_back(first);
       // vis.insert({i,j});
        if(ans.size() == k) break;
        // next (i+1,j)
        if(i+1 < n && !vis.count({i+1,j}))
      {
		    pq.push({a[i+1]+b[j],{i+1,j}});
			 vis.insert({i+1,j});
	  }

        // next (i,j+1)
        if(j+1 < n && !vis.count({i,j+1}))
      {  
		  pq.push({a[i]+b[j+1],{i,j+1}});
		   vis.insert({i,j+1});
	   }
    }
    return ans;
}
