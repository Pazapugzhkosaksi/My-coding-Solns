// My implementation of binary Search

    // O(logn) time complexity
	int binarySearchUtility(int arr[],int low,int high,int k)
    {
        int mid=(low+high)/2;
        while(low<=high)
        {
            if(arr[mid]==k)
                return mid;
            if(arr[mid]>k)
                return binarySearchUtility(arr,low,mid-1,k);
            if(arr[mid]<k)
                return binarySearchUtility(arr,mid+1,high,k);
        }
        return -1;
    }

    int binarysearch(int arr[], int n, int k){
       return  binarySearchUtility(arr,0,n-1,k);
    
    }