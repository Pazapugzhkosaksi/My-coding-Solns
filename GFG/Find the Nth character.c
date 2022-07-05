char nthCharacter(string S, int R, int N) {
        string t;
        for(int i=0;i<R;i++)
        {   
            t="";
            for(int j=0;j<S.length();j++)
            {
                if(S[j]=='0')
                {
                    t+="01";
                }
                else
                {
                    t+="10";
                }
            }
            S=t;
        }
       // cout<<S<<endl;
        char c=S[N];
        return c;
    }