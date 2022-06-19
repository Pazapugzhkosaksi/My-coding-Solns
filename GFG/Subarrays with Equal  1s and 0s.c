 long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
       long long int c0,c1,r=0;
       for(int i=0;i<n-1;i++)
       {
           if(arr[i]==0)
           {
               c0=1;
               c1=0;
           }
           else
           {
               c0=0;
               c1=1;
           }
           for(int j=i+1;j<n;j++)
           {
               if(arr[j]==0)
                    c0+=1;
               else
                    c1+=1;
               if(c1==c0)
                  r+=1;
           }
       }
       return r;
    }