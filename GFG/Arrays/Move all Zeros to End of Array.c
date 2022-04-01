

// Bruteforce Approach
// Required Complexities    O(N) and  O(1)
void pushZerosToEnd(int arr[], int n) {
	    vector<int>a;
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==0)
	            c+=1;
	        else
	            a.push_back(arr[i]);
	    }
	    int s;
	    for(s=0;s<a.size();s++)
	    {
	        arr[s]=a[s];
	    }
	    for(int i=0;i<c;i++)
	    {
	        arr[s]=0;
	        s+=1;
	    }
}