

// Straightforward BruteForce Approach but takes o(n*m) time 
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int c,maxi=0,index=-1;
	    for(int i=0;i<n;i++)
	    {
	        c=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	                c+=1;
	        }
	        if(c>maxi)
	        {
	            maxi=c;
	            index=i;
	        }
	    }
	    return index;
	}


	// Optimized solution with O(n+m) time complexity  // Ladder Approach

	 int rowWithMax1s(int arr[][], int n, int m) {
        int i=0,j = m-1;
        int res = -1;
        while(i<n && j>=0){
            if(arr[i][j]==1){        
                j--;                     
                res = i;
            }
            else i++;       
        }
        return res;
    }


    // Similar Alternative Approach

				    int i=0,j=m-1,ans=-1,max=0,count=0;
				    for(int i=0;i<n;i++)
				    {
				       
				        for(int j=m-1;j>=0;j--)
				        {
				            if(arr[i][j]==1)
				            count++;
				              else 
				              break;
				        }
				        if(count>max)
				        {
				            max=count;ans=i;
				        }
				    }
				   

				    return ans;




    // Binary Search Impl O(N*logM)


				    class Solution{
							public:
							   int binary_search(vector<vector<int> > a, int i, int m){
							       int lo=0;int hi=m-1;
							       int pos=-1;
							       while(lo<=hi){
							           int mid=lo+(hi-lo)/2;
							           if(a[i][mid]==0){lo+=1;}
							           else if(a[i][mid]==1){pos=mid;hi-=1;}
							       }
							       if(pos==-1){return 0;}
							       else{return m-pos;}
							   }
								int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
								    // code here
								    int row=0;
								    int ans=INT_MIN;
								    for(int i=0;i<n;i++){
								        int num=binary_search(arr,i,m);
								        if(num>ans){ans=num;row=i;}
								    }
								    if(ans==0){return -1;}
								    return row;
								}

						