#include <bits/stdc++.h> 
class Queue {
    // Define the data members(if any) here.
    stack<int> st1;
    stack<int> st2; // res
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int x) {
        // Implement the enqueue() function.
           while(!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
        st2.push(x) ;
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(isEmpty()) return -1;
        int ans = st2.top();
        st2.pop();
        return ans;
    }

    int peek() {
        // Implement the peek() function here.
        if(isEmpty()) return -1;
        int ans = st2.top();
        return ans;
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return st2.empty();
    }
};
