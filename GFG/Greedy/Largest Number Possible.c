

 string findLargest(int N, int S){
        
        
        if(S==0)
        {
            if(N>1)
                return "-1";
            else
                return "0";
        }
         if(S>9*N )
            return "-1";
        else
        {
            string s="";
            for(int i=0;i<N;i++)
            {
                if(S>=9)
                {
                    s+='9';
                    S-=9;
                }
                else if(S>=0 && S<9)
                {
                    char c=S+'0';
                    s+=c;
                    S=0;
                }
                else
                    s+='0';
            }
            return s;
        }
    }