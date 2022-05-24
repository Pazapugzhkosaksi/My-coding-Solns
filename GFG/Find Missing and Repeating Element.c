// 330/340 cases passed
int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int* ar=new int[2];
        unsigned long long sum=0;
        int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1] && f==0)  
            {
                ar[0]=arr[i+1];
                arr[i]=0;
            }
            sum+=arr[i];
        }
        sum+=arr[n-1];
        unsigned long long total=((n*(n+1))/2);
        ar[1]=total-sum;
        return ar;
    }