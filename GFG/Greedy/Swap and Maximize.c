
long long int maxSum(int arr[], int n)
{
    long long int s=0;
    int j=n-1;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        s+=abs(arr[i]-arr[j]);
        j--;
    }
    return s;
}