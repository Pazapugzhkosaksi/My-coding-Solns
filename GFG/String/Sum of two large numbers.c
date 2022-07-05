 // My succesful approach
 string findSum(string X, string Y) {
        int l1=X.length();
        int l2=Y.length();
        string N1,N2,result="";
        if(l1>=l2)
        {
            N2=Y;
            N1=X;
        }
        else{
            N1=Y;
            N2=X;
        }
        int i1=N1.length()-1;
        int i2=N2.length()-1;
        int c=0;
        while(i2>=0)
        {
            int a1=N1[i1]-'0';
            int a2=N2[i2]-'0';
            int sum=c+a1+a2;
            if(sum>=10)
            {
               sum-=10;
               c=1;
            }
            else
                c=0;
            string a=to_string(sum);
            result+=a;
            i2-=1;
            i1-=1;
            
        }
        while(i1>=0)
        {
             if(c==1)
             {
                 int a=N1[i1]-'0';
                 a+=1;
                 if(a>=10)
                 {
                     a-=10;
                     c=1;
                 }
                 else
                    c=0;
                 result+=to_string(a);
                 
                 
             }
             else
             {
                result+=N1[i1];
             }
             i1-=1;
        }
        if(c==1)
            result+='1';
        long long int l=result.length()-1;
        while(result[l]=='0')
        {
            result[l]='!';
            l-=1;
        }
        reverse(result.begin(),result.end());
        string res="";
        for(long long i=0;i<result.length();i++)
        {
            if(result[i]!='!')
                res+=result[i];
        }
        if(res=="")
            res+='0';
        return res;
    }