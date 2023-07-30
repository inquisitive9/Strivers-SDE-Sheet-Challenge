#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &nums2, int n) {
        vector<int> vec(n);
        stack<int> st;
        st.push(-1);
        for(int i = n-1 ; i >= 0 ; i--) {
            while(st.top() != -1 && nums2[i] >= st.top())  {
                st.pop();
            }
            vec[i] = st.top();
            st.push(nums2[i]);
        }
        return vec;

}
