 //Successful Approach
 string removeConsecutiveCharacter(string S)
    {
        string s="";
        s+=S[0];
        char c=S[0];
        for(int i=1;i<S.length();i++)
        {
            if(S[i]!=c)
            {
                c=S[i];
                s+=S[i];
            }
        }
        return s;
    }