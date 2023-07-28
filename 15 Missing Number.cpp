#include <bits/stdc++.h>

 

int findMajorityElement(int arr[], int n)

{

//Moore's Voting Algorithm

int count=0,element=arr[0];

for(int i=1;i<n;i++)

{

if(count==0)

{

count=1;

element=arr[i];

}

else if(arr[i]==element)

count++;

else

count--;

}

count=0;

for(int i=0;i<n;i++)

{

if(arr[i]==element)

{

count++;

}

}

if(count>(n/2))

return element;

else

return -1;

}
