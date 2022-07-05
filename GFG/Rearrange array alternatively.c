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