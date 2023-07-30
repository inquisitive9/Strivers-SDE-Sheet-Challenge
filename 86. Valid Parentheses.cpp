bool isValidParenthesis(string s)
{
    // Write your code here.
            stack<int> st;
        for(auto ch : s) {
            if(st.empty()) {
                st.push(ch);
            }
            else if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else if(ch == ')' && st.top() == '(') {
                st.pop();
            }
             else if(ch == ']' && st.top() == '[') {
                st.pop();
            }
             else if(ch == '}' && st.top() == '{') {
                st.pop();
            }
            else 
            return false;
        }
        return st.size() == 0;
}
