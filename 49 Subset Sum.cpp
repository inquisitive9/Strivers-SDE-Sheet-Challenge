#include<bits/stdc++.h>

 

void help(int ind, int n, int sum, vector<int>&num,vector<int>&ans){

    if(ind >= n){

        ans.push_back(sum);

        return;

    }

    help(ind+1,n,sum+num[ind],num,ans);

    help(ind+1,n,sum,num,ans);

}

vector<int> subsetSum(vector<int> &num){

    // Write your code here.

    int n=num.size();

    vector<int>ans;

    help(0,n,0,num,ans);

    sort(ans.begin(),ans.end());

    return ans; 

}
