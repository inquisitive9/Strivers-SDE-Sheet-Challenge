string reverseString(string &str){

    // reverse(str.begin(),str.end());

    int n = str.size();

    int i = n-1;

    int j = n-1;

    string s2 = "";

    while(j>=0){

        while(str[j]!=' ' && j>=0){

            j--;

        }

        int s = j+1;

        for(int k = s ; k<=i ; k++ ){

            s2+=str[k];

            if(k==i){

                s2+=' ';

            }

        }

        j--;

        i=j;

    }   

    return s2;

}
