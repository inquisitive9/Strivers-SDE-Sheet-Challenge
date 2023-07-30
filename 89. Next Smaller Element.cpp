#include <bits/stdc++.h> 
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;
    vector<int> ans(n,-1);
    for(int i = n-1 ; i >= 0 ;i--) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        if(!st.empty()) {
            ans[i] = arr[st.top()];
        }
        st.push(i);
    }
    return ans;
}
