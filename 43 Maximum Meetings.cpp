int maximumMeetings(vector<int> &start, vector<int> &end)
{
    // Write your code here.
     vector<pair<int,int>>v;  

    int n=(start.size()+end.size())/2;

        for (int i=0; i<n; i++){

           v.push_back({end[i],start[i]});  

        }

          sort(v.begin(),v.end());

          int endtime = v[0].first;

          int count =1;

         for(int i=1;i<n;i++){

           if(v[i].second>endtime){

            count++;

            endtime= v[i].first;}

        }

        

        return count;
}
