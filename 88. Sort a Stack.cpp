#include <bits/stdc++.h> 
void insert(stack<int>& st,int ele) {
    if(st.empty() || st.top() < ele) {
        st.push(ele);
        return ;
    }
    else {
            int x = st.top();
            st.pop();
            insert(st,ele);
            st.push(x);
         }
}
void reverse(stack<int>& st) {
    if(st.empty()) return ;
    int ele = st.top();
    st.pop();
    reverse(st);
    insert(st,ele);
}
void sortStack(stack<int> &st)
{
	// Write your code here
	reverse(st);
}
