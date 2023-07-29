#include <bits/stdc++.h> 

int atoir(string& str,int index,int result)// to pass all test cases use call by reference of str

{

    if(index>=str.length())

    {

        return result;

    }

    if(str[index]>='0' && str[index]<='9')

    {

        result = result*10+str[index]-'0';

    }

    return atoir(str,index+1,result);

}

int atoi(string str) {

    // Write your code here.

    if(str.length()==0)

    return 0;

    int res=atoir(str,0,0);

    if(str[0]=='-')

    {

        res=-1* res;

    }

     return res;

}

