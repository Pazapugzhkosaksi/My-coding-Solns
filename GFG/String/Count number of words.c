// Successful and optimal Approach
// T.C O(N) and S.C=O(1)
int countWords(string s)
{
    int c=0,f=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z' && f==0)
        {
            c+=1;
            f=1;
        }
        if(s[i]==' ' || s[i]=='\\' ){
            if(s[i]=='\\')
            {
                while(s[i+1]=='\\') // for addressing special instances like 
                    i++;           // abc/////t///
                i++;
            }
            f=0;
        }
    }
    // if(f==1)
    //     c+=1;
    return c;
}