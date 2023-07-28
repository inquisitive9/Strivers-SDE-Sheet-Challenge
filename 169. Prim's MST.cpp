#include <bits/stdc++.h> 

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)

{

    // Write your code here.

    unordered_map<int,list<pair<int,int>>>adjList;

    

    for(int i=0;i<g.size();i++){

        int u=g[i].first.first;

        int v=g[i].first.second;

        int w=g[i].second;

 

        adjList[u].push_back({v,w});

        adjList[v].push_back({u,w});

    }

 

    vector<int>visited(n+1,0);

     priority_queue<

        pair<pair<int, int>, int>,

        vector<pair<pair<int, int>, int>>,

        greater<pair<pair<int, int>, int>>

    > pq;

    vector<pair<pair<int, int>, int>>result;

    

    pq.push({{0,1},-1});

    // wt,node,parent;

    while(!pq.empty()){

        auto it=pq.top();

        pq.pop();

        int wt=it.first.first;

        int node=it.first.second;

        int pt=it.second;

 

        if(visited[node]) continue;

 

        visited[node]=1;

 

        if(pt!=-1){

            result.push_back({{pt,node},wt});

        }

 

        for(auto neighbour: adjList[node]){

            int adjnode=neighbour.first;

            int adjwt=neighbour.second;

            int adjpt=node;

 

            if(!visited[adjnode]){

                pq.push({{adjwt,adjnode},node});

            }

        }

 

    }

 

    return result;

 

}

 

