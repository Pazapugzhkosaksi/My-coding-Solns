//Peer Approach
// Same logic but used vectors instead of 2d character array

string convert(string s, int n) {
        vector<string>v (n,"");
        int flag=0,j=0;
        if(n==1)
            return s;
        else
        {
            for(int i=0;i<s.length();i++)
            {
                v[j]+=s[i];
                if(!flag)
                    j++;
                else
                    j--;
                if(j==0 || j==n-1)
                    flag=!flag;
            }
            string st;
            for(int i=0;i<v.size();i++)
                st+=v[i];
          
            return st;
        }
    }