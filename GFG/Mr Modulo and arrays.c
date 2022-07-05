// T.C. O(N*Log(N) + M*Log(M))
// S.C O(1)
// Bruteforce approach 
int maxModValue(int arr[], int n)
{
    sort(arr,arr+n);
    reverse(arr,arr+n);
    int mid=n/2,maxi=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j] && arr[i]%arr[j]>maxi)
                maxi=arr[i]%arr[j];
        }
    }
    return maxi;
}
// Tweak of bruteforce approach
    
int maxModValue(int arr[], int n)
{
    sort(arr,arr+n);
    int mid=n/2,maxi=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]%arr[j]>maxi)
                maxi=arr[i]%arr[j];
        }
    }
    return maxi;
}