// Successful Approach
int smallestSubWithSum(int arr[], int n, int x)
{
       
        for(int i=0;i<n;i++)
        {
            if(arr[i]>x)
                return 1;
        }
        int sum=0,s=0,m=INT_MAX;
        for(int i=0;i<n;)
        {
            sum+=arr[i];
            while(sum>x && s!=i)
            {
                if(i-s+1<m)
                    m=i-s+1;
                sum-=arr[s];
                s+=1;
            }
            i++;
        }
        return m;
}