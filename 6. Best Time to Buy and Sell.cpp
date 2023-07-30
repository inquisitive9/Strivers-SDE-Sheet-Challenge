#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
        int prof = 0 ;
        int prev = prices[0];
        for(int i = 1 ; i < n ; i++) {
            if(prices[i] < prev) {
                prev = prices[i];
            }
            else {
                prof = max(prof,prices[i]-prev);
            }
        }
        return prof;
}
