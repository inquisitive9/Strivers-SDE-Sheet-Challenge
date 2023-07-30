#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int n1 = arr.size();
    int low = 0 , high = n1-1;
    int i = 0 ;
    while(i <= high) {
            while(arr[i] != arr[arr[i]-1]) {
                swap(arr[i],arr[arr[i]-1]);
            }
            i++;   
    }
    // A[0] -> Duplicate   
    // A[1] -> missing
    pair<int,int> A;
    int missing = 0 , dup = 0;
    for( i = 0  ; i < n1 ;i++) {
        if(arr[i] != i+1) {
           A.second = arr[i];
           A.first = i+1;
           return A;
        }
    }
}
