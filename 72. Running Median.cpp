#include <bits/stdc++.h>
void findMedian(int *arr, int n)
{
    // Write your code here
    if(n==0) return ;

    priority_queue<int> left;
    priority_queue <int, vector<int>, greater<int> > right;
    left.push(arr[0]);
    cout<<arr[0]<<" ";
    if(n==1) return ;
    if(left.top() <= arr[1]) {
        right.push(arr[1]);
    }
    else {
        right.push(left.top());
        left.pop();
        left.push(arr[1]);
    }
    cout<<(arr[0]+arr[1])/2<<" ";
    for(int i = 2 ; i < n ;i++) {
        int ele = arr[i];
        if((i+1)%2 == 0) {
            if(left.top() > ele) {
                right.push(left.top());
                left.pop();
                left.push(ele);
            }
            else {
                right.push(ele);
            }
            cout << (right.top() + left.top())/2 << " " ;
        }
        else {
            if(ele <= right.top()) {
                left.push(ele);
            }
            else {
                left.push(right.top());
                right.pop();
                right.push(ele);
            }
            cout << left.top() << " ";
        }
    }
}
