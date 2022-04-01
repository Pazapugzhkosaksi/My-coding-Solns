	


    // Time Complexity O(n)
	int count(int arr[], int n, int x) {
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==x)
	            c+=1;
	    }
	    return c;
	}


	// Time Complexity O(log n + count)

	int bs(int arr[],int l,int h,int x)
	{
	    int m=(l+h)/2;
	    while(l<=h)
	    {
	        if(arr[m]==x)
	            return m;
	        else if (arr[m]>x)
	            return bs(arr,l,m-1,x);
	        else
	            return bs(arr,m+1,h,x);
	    }
	    return -1;
	}
	
	int count(int arr[], int n, int x) {
	   int i=bs(arr,0,n-1,x),c,l,r;
	   if(i==-1)
	     return 0;
	   else {
	        c=1;
	        l=i-1;
	        while(l>=0 && arr[l]==x)
	        {
	            c+=1;
	            l-=1;
	        }
	        
	        r=i+1;
	        while(r<n && arr[r]==x)
	        {
	            c+=1;
	            r+=1;
	        }
	        return c;
	   }
	  
	   
	}