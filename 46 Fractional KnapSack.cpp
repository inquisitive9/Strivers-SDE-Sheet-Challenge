#include <bits/stdc++.h> 

//this will return per unit value

bool comp(pair<int,int>a,pair<int,int>b)

{

    double r1=(double)a.second/a.first;

    double r2=(double)b.second/b.first;

    return r1>r2;

}

double maximumValue (vector<pair<int, int>>& items, int n, int w)

{

    // sort on basis of per unit value

    sort(items.begin(),items.end(),comp);

    double res=0;

    // if wt. of item is less than capcity then add it

    for (int i=0;i<n;i++)

    {

        if(items[i].first<=w)

        {

            res=res+items[i].second;

            w=w-items[i].first;

        }

        // if wt. of item is more than capacity then take a fraction of it

        else

        {

            res=res+(items[i].second *((double)w/items[i].first));

            break;

        }

    }

    

    return res;

}
