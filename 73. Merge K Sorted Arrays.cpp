#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue< pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> > pq;
    int i = 0;
    for(auto arr:kArrays) {
        pq.push({arr[0],{i,0}});
        i++;
    }
    vector<int> ans;
    while(!pq.empty()) {
        auto front = pq.top();
        pq.pop();
        int ele = front.first;
        int arrNo = front.second.first;
        int idx = front.second.second;
        ans.push_back(ele);
        if(idx+1 >= kArrays[arrNo].size()) continue;
        pq.push({kArrays[arrNo][idx+1],{arrNo,idx+1}});
    }
    return ans;
}
