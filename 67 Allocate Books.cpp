#include <bits/stdc++.h> 

long countNumberOfDays(vector<int>& time, long long mid) {
	long long timeTillNow = 0;
	long n = 1;
	for(int i=0; i<time.size(); i++) {
		timeTillNow += time[i];
		if (timeTillNow > mid) {
			n++;
			timeTillNow = time[i];
		}
	}
	return n;
}


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long maxVal = *max_element(time.begin(), time.end());
	long long sumVal = accumulate(time.begin(), time.end(),0);
	long long low = maxVal, high = sumVal;
	long long ans = sumVal;
	while(low <= high) {
		long long mid = (low+high)/2;
		long numOfDays = countNumberOfDays(time, mid);
		// cout << "low: "<<low<<" mid: "<<mid<<" high: "<<high<<" noOfDays: "<<numOfDays<<"\n";
		if(numOfDays <= n) {
			ans = mid;
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	return ans;
}
