#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &nums)
{
    int num1=-1,num2=-1,cnt1=0,cnt2=0;
        for(auto i:nums) {
            if(num1==i) {
                    cnt1++;
            }
            else if(num2==i) {
                cnt2++;
            }
            else if(cnt1==0) {
                num1=i;
                cnt1=1;
            }
            else if(cnt2==0) {
                num2=i;
                cnt2=1;
            }
            else {
                cnt1--;
                cnt2--;
            }     
        }
        vector<int> ans;
        cnt1=cnt2=0;
        int n=nums.size();
        for(auto i:nums) {
            if(i==num1) {
                cnt1++;
            }
            else if(i==num2) {
                 cnt2++;
            }
        }
        if(cnt1> n/3)
            ans.push_back(num1);
        if(cnt2>n/3)
            ans.push_back(num2);
        return ans;
}
