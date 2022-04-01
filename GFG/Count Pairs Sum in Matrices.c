	

    // Time limit exceeded but not space optimized
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    int c=0;
	    vector<int> a,b;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            a.push_back(mat1[i][j]);
	            b.push_back(mat2[i][j]);
	        }
	    }
	    vector<int>::iterator it;
	    for(int i=0;i<a.size();i++)
	    {
	        int key=x-a[i];
	        it = find(b.begin(), b.end(), key);
	        if(it!=b.end())
	           c+=1;
	    }
	    return c;
	}


    // Passed all cases and meets the time criteria but not space optimized.
	int binarySearch(int arr[],int low,int high,int k)
    {
        int mid=(low+high)/2;
        while(low<=high)
        {
            if(arr[mid]==k)
                return mid;
            if(arr[mid]>k)
                return binarySearch(arr,0,mid-1,k);
            if(arr[mid]<k)
                return binarySearch(arr,mid+1,high,k);
        }
        return -1;
    }
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    int c=0;
	    int s=n*n+1,i1=0,i2=0;
	    int a[s],b[s];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            a[i1]=mat1[i][j];
	            i1+=1;
	            b[i2]=mat2[i][j];
	            i2+=1;
	        }
	    }
	    
	    for(int i=0;i<i2;i++)
	    {
	        int key=x-a[i];
	        int a=binarySearch(b,0,i2-1,key);
	       if(a!=-1)
	           c+=1;
	    }
	    return c;
	}