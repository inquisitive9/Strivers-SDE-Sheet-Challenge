#include<math.h>

int NthRoot(int n, int m) {

  // Write your code here.

  int ans= round(pow(m , (1.0/n)));

  if(pow(ans , n)==m ){

    return ans;

  }

  else{

    return -1;

  }

 

}

