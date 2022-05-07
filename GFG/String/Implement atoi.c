int atoi(string str) {
        int n=0,c=0,f=0;
        for(int i=0;i<str.length();i++)
        {
            
            if(str[i]>='0' && str[i]<='9')
            {
                int a=str[i]-'0';
                n=n*10+a;
                c+=1;
            }
            else
            {
              if(c==0 && str[i]=='-')
              {
                f=1;
                c+=1;
              }
              else
                return -1;
            }
        }
        if(f==1)
            return n-(2*n);
        else
            return n;
    }