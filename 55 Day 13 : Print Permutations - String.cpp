#include <bits/stdc++.h>

 

void solve(string s,vector<string>&answer,int index)

{

    if(index>=s.size())

    {

        answer.push_back(s);

        return ;

    }

    for(int i=index;i<s.size();i++)

    {

        swap(s[index],s[i]);

        solve(s,answer,index+1);

        //backtracking

        swap(s[index],s[i]);

    }

}

vector<string> findPermutations(string &s) {

    vector<string>answer;

    int index=0;

    solve(s,answer,index);

    return answer;

}
