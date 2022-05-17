100/117 cases with bruteforce approach
long long int inversionCount(long long arr[], long long n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                c+=1;
            }
        }
    }
    return c;
}