#include <bits/stdc++.h>

void solve(int indx,int sum, vector<int> arr, int n, int k, vector<int>&path, set<vector<int>>&res ){

 

    if(indx > n){

        return;

    }

    if(sum==k){

        vector<int>temp=path;

        sort(temp.begin(),temp.end());

        res.insert(temp);

    }

 

    path.push_back(arr[indx]);

    solve(indx+1,sum+arr[indx],arr,n,k,path,res);

    path.pop_back();

    solve(indx+1,sum,arr,n,k,path,res);

}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){

    // Write your code here.

 

    set<vector<int>>st;

    vector<int>path;

    // sort(arr.begin(),arr.end());

    solve(0,0,arr,n,target,path,st);

 

    vector<vector<int>>res(st.begin(),st.end());

    return res;

}

 
