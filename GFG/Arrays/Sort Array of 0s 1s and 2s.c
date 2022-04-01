
// My approach (Solution got accepted but not optimized as per required criteria)
void sort012(int a[],long int n)
    {
       long  int c0=0,c1=0;
        for(long int i=0;i<n;i++)
        {
            if(a[i]==0)
                c0+=1;
            if(a[i]==1)
                c1+=1;
        }
        long int c=0;
        for(long int i=0;i<c0;i++)
        {
            a[c]=0;
            c++;
        }
        for(long int i=0;i<c1;i++)
        {
            a[c]=1;
            c+=1;
        }
        for(long int i=c;i<n;i++)
        {
            a[c]=2;
            c+=1;
        }
        
    }