#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    // Write your code here.
   //   int n = nums.size();
    if (n == 0)
        return 0;
        int mxlen = 1;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp.insert({nums[i], 1});
    }
    for (auto i : nums)
    {
        if (mp.count(i - 1))
        {
            mp[i] = 0;
        }
         else 
        {
            int curlen = 1;
            int curS = i;
            while (mp.count(curS + 1))
            {
                curlen++;
                curS++;
            }
            if (curlen > mxlen)
                mxlen = curlen;
        }
    }
    return mxlen;
}
