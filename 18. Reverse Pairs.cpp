#include <bits/stdc++.h> 
   	int merge(vector<int> &nums,int l,int mid,int h) {
	int n1 = mid - l + 1;
    int n2 = h - mid;
    int a1[n1];
    int a2[n2];
    int inv = 0;
    for (int i = 0; i < n1; i++)
    {
        a1[i] = nums[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        a2[i] = nums[mid + i + 1];
    }
     int x = 0, y = 0, z = l;
    while (x < n1 && y < n2)
    {
      //  if (a1[x] <= a2[y] || a1[x]<=2*a2[y])
          if ((long long)a1[x]<=2*(long long)a2[y])
        {
           x++;
        }
        else
        {
            inv+=(n1-x);
            y++;
        }
    }
    x = 0, y = 0, z = l;
    while (x < n1 && y < n2)
    {
        if (a1[x] <= a2[y])
        {
            nums[z++] = a1[x++];
        }
        else
        {
            nums[z++] = a2[y++];
        }
    }
    while (x < n1)
    {
        nums[z++] = a1[x++];
    }
    while (y < n2)
    {
        nums[z++] = a2[y++];
    }
    return inv;
	}
    int mergeSort(vector<int> &arr,int l,int h) {
    int inv = 0;
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, h);
        inv += merge(arr, l, mid, h);
    }
    return inv;
    }
int reversePairs(vector<int> &nums, int n){
	// Write your code here.
	return mergeSort(nums,0,nums.size()-1);	
}
