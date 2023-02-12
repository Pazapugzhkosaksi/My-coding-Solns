// Successful Approach using Striver
int findPlatform(int arr[], int dep[], int n)
{
    // we are intersted in finding the number of platforms
    // Hence it is not necessary the the arrival and dep time of a train has to be in the same index.
	sort(arr,arr+n);
	sort(dep,dep+n);

    // Setting i=1 since a minimum of 1 platform is always needed
	int i=1,j=0;
	int platforms=1,maxi=1;
	
    while(i<n && j<n){

        // if arrival time of incoming train is greater, then the previous train would have left the platform 
        // thereby freeing one platform (Else Condition)

	    if(arr[i]<=dep[j]){
	        platforms+=1;
	        i++;
	    }

	    else{
            platforms-=1;
	        j++;
	    }
    	    
    	if(platforms>maxi){
    	   maxi=platforms;
        }
    }
    return maxi;
}