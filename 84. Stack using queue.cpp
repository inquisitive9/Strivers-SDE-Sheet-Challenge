#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
    queue<int> q1,q2;
   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q2.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
         return q2.empty();
    }

     void push(int x) {
        q1.push(x);
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        if(isEmpty()) return -1;
        int val = top();
        q2.pop();
        return val;
    }
    
    int top() {
         if(isEmpty()) return -1;
        return q2.front();
    }
    
};
