// 121/431 testcases passed
bool subArrayExists(int arr[], int n)
    {
       int s;
       for(int i=0;i<n;i++)
       {
           s=arr[i];
           if(s==0)
             return 1;
           for(int j=i+1;j<n;j++)
           {
               s+=arr[j];
               if(s==0)
                 return 1;
           }
       }
       return 0;
    }