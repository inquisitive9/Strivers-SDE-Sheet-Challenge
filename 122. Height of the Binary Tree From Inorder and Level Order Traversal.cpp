#include <bits/stdc++.h>
using namespace std;

int solve(int start, int end, int n, int i, vector<int>& inorder, vector<int>& levelorder, unordered_map<int,int>& m,vector<vector<int>>& cache) {
    if (start > end) {
        return 0;
    }
    int left = 0;
    int right = 0;
    int temp=0;
    int index = m[levelorder[i]];
    if(cache[start][end]!=-1) return cache[start][end];
    if (index >= start && index <= end) {
        if (index-start>=index-end) {
        left = solve(start, index - 1, n, i + 1, inorder, levelorder, m, cache);
    }
    right = solve(index + 1, end, n, i + 1, inorder, levelorder, m, cache);
    }
    else{
        temp=solve(start,end,n,i+1,inorder,levelorder,m,cache);
    }
    cache[start][end]= max(left+1, max(temp,right+1));
    return cache[start][end];
}

int heightOfTheTree(vector<int>& inorder, vector<int>& levelorder, int N) {
    unordered_map<int,int> m;
    vector<vector<int>> cache(N, vector<int>(N, -1));
    for (int i = 0; i < N; i++) {
        m[inorder[i]] = i;
    }
    int i = 0;
    int ans= solve(0, N - 1, N, i, inorder, levelorder, m,cache) - 1;
    return ans;
}
