int isValid(string s) {
            if(s.length()>15)
                return 0;
            int c=-1,dc=0,f;
            for(int i=0;i<s.length();i++)
            {
                if( s[i]=='0' && (s[i+1]>='0' && s[i+1]<='9') && (s[i+2]>='0' && s[i+2]<='9') || s[i]=='0' && (s[i+1]>='0' && s[i+1]<='9') )
                    return 0;
                if(s[i]>='0' && s[i]<='9')
                {
                    int n=s[i]-'0';
                    if(c==-1)
                        c=0;
                    c=c*10+n;
                    if(c>255)
                        return 0;
                }
                else if(s[i]=='.' && c>=0)
                {
                    dc+=1;
                    if(c<0 && c>255)
                        return 0;
                    else
                        c=-1;
                }
                else
                    return 0;
            }
            if(dc==3)
                return 1;
            else return 0;
            
            
        }