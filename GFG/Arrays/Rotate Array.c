

// My Approach (But Not optimized and failed while submission)   (Space Efficient but not time efficient).
	for(int j=0;j<d;j++)
	    {
	        int t=arr[0];
	        for(int k=1;k<n;k++)
	            arr[k-1]=arr[k];
	        arr[n-1]=t;
	    }

// 2nd Attempt (Worser than first incase of time complexity)

	    int subarray[(n-d)+1];
	    //cout<<n<<" "<<d<<endl;
	    int arr[n+1];
	    for(int j=0;j<n;j++)
	        cin>>arr[j];
	    for(int j=0;j<d;j++)
	        subarray[j]=arr[j];
	    for(int j=d;j<n;j++)
	    {
	        arr[j-d]=arr[j];
	    }
	    int c=0;
	    for(int j=n-d;j<n;j++)
	    {
	        arr[j]=subarray[c];
	        c+=1;
	    }
// Same as second except the tweak in the second for loop.
void rotateArr(int arr[], int d, int n){
        vector<int > buf;
     for(int j=0;j<d;j++)
     {
         buf.push_back(arr[j]);
     }
     for(int j=0;j<n-d;j++)
     {
         arr[j]=arr[j+d];
     }
     int c=0;
     for(int j=n-d;j<n;j++)
     {
         arr[j]=buf[c];
         c+=1;
     }

// Working Solution (Not Correct )

	    for(int j=d;j<n;j++)
	        cout<<arr[j]<<" ";
	   for(int j=0;j<d;j++)
	        cout<<arr[j]<<" ";
	  


	  		//   **********************************   Juggling Algorithm   ***************************************




									int gcd(int a,int b)
								    {
								    	if(b==0)
								        	return a;
								    	else
								        	return gcd(b,a%b);
								    }
								    void rotateArr(int arr[], int r, int n){
								        int temp;
								        int nos=gcd(n,r);
								        int d=-1,j=0;
								        for(int i=0;i<nos;i++)
								        {
								           temp=arr[i];
								           j=i;
								           d=(j+r)%n;
								           while(i!=d)
								           {
								               
								               arr[j]=arr[d];
								               j=d;
								               d=(j+r)%n;
								           }
								           arr[j]=temp;
								       }
								    }