//188/191 cases passes
// Not space Optimistic
void rearrange(long long *arr, int n) 
{ 
    	long long arr2[n],c=0;
    	int f=0,s=0,e=n-1;
    	while(s<=e)
    	{
    	    if(!f)
    	        arr2[c++]=arr[e--];
    	    else
    	        arr2[c++]=arr[s++];
    	    f=!f;
    	}
    	for(long long i=0;i<n;i++)
    	    arr[i]=arr2[i];
	 	
    	 
}

// Successful Approach but not space complex
// S.C O(N) Required S.C O(1)
void rearrange(long long *arr, int n) 
{ 
    	deque<long long> q;
    	for(int i=0;i<n;i++){
    	    q.push_front(arr[i]);
    	}
    	int f=1,s=0;
	    while(!q.empty())
	    {
	        if(!f)
	        {
	            arr[s++]=q.back();
	            q.pop_back();
	        }
	        else{
	            arr[s++]=q.front();
	            q.pop_front();
	        }
	        f=!f;
}

// Successful and optimal approach

void rearrange(long long *a, int n) 
{ 
    int min_ind=0,max_ind=n-1;
    long long z=a[n-1]+50; 
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[i]+=(a[max_ind]%z)*z;
            max_ind-=1;
        }
        else{
            a[i]+=(a[min_ind]%z)*z;
            min_ind+=1;
        }
    }

	for(int i=0;i<n;i++)
	{
	    a[i]/=z;
	}
}