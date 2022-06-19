// Successful approach 
 string newIPAdd (string s)
    {
        vector<string>v(100000,"");
        int i=0;
        string st;
        for(int j=0;s[j]!='\0';j++)
        {
            
             if(s[j]=='.')
             {
                if(v[i]=="")
                {
                    v[i]='0';
                }
                i+=1;
             }
             else
            {
                if(v[i]=="" && s[j]=='0')
                    continue;
                v[i]+=s[j];
            }
            
        }
        for(int j=0;j<=i;j++)
        {
            if(j==i && v[j]=="")
                st+='0';
            st+=v[j];
            
            if(j!=i)
                st+='.';
        }
        
        return st;
    }