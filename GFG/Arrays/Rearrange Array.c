
// My soln
 void rearrangeArray(int arr[], int n) {
        int arr0[n+1];
        sort(arr,arr+n);
        for(int i=0,j=0;i<n;i+=2,j+=1)
        {
            arr0[i]=arr[j];
        }
        for(int i=1,e=n-1;i<n;i+=2,e-=1)
            arr0[i]=arr[e];
        for(int i=0;i<n;i++)
            arr[i]=arr0[i];
    }