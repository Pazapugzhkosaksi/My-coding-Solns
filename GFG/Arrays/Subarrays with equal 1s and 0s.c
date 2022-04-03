// 6/203 cases passed

long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        int n0,n1,c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                n0=1;
                n1=0;
            }
            if(arr[i]==1)
            {
                n1=1;
                n0=0;
            }
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==0)
                    n0+=1;
                else
                    n1+=1;
                if(n0==n1)
                    c+=1;
            }
            
        }
        return c;
    }