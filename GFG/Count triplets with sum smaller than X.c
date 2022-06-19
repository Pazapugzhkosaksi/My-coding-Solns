// Bruteforce approach 310/580 cases
long long countTriplets(long long arr[], int n, long long sum)
	{
	    long long c=0;
	    for(int i=0;i<n-2;i++)
	    {
	        for(int j=i+1;j<n-1;j++)
	        {
	            for(int k=j+1;k<n;k++)
	            {
	              //  cout<<i<<" "<<j<<" "<<k<<endl;
	                if(arr[i]+arr[j]+arr[k]<sum)
	                    c+=1;
	            }
	        }
	    }
	    return c;
	}