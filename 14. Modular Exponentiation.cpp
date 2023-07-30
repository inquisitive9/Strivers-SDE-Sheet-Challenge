#include <bits/stdc++.h>

int modularExponentiation(int x, int newn, int m) {
	// Write your code here.
	//   long long newn = n;
        long long res = 1%m;
        while(newn>0) {
            if(newn&1) {
                res = (res*(x)%m)%m;
            }
            x = ((long long)x*x)%m;
            newn = newn >> 1;
        }
        return res;
}
