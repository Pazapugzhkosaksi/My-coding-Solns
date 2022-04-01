	
// Straightforward bruteforce approach (20/30)
	int countTriplet(int arr[], int n)
	{
	    int c=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n-2;i++)
	    {
	       for(int j=i+1;j<n-1;j++)
	       {
	           for(int k=j+1;k<n;k++)
	           {
	               if(arr[i]+arr[j]==arr[k])
	                  c+=1;
	           }
	       }
	    }
	    return c;
	}


// Second Succesful Approach

	int bs(int arr[],int x,int l,int h)
	{
	    int mid=(l+h)/2;
	    while(l<=h)
	    {
	        if(arr[mid]==x)
	            return mid;
	        else if(arr[mid]<x)
	            return bs(arr,x,mid+1,h);
	       else
	           return bs(arr,x,l,mid-1);
	    }
	    return -1;
	}
	int countTriplet(int arr[], int n)
	{
	    sort(arr,arr+n);
	    int sum,count=0;
	    for(int i=0;i<n-1;i++){
	        sum=arr[i];
	        for(int j=i+1;j<n;j++)
	        {
	            sum+=arr[j];
	            if(bs(arr,sum,0,n-1)>=0)
	                count+=1;
	            sum=arr[i];
	        }
	    }
	    return count;
	}