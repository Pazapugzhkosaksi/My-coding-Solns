

// My Approach #1   Not Space efficient.
int majorityElement(int a[], int n)
    {
       int counts[100000];
       memset(counts,0,sizeof(counts));
       for(int i=0;i<n;i++)
       {
           counts[a[i]]+=1;
           if(counts[a[i]]>(n/2))
                return a[i];
       }
       return -1;
    }