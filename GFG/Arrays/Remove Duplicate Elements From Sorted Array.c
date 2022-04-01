
//  Not Optimized. Expected complexities O(n) O(1)   // Successful

	int remove_duplicate(int arr[],int n){
        int b[n],c=0;
        memset(b,0,n*sizeof(int));
        b[0]=arr[0];
        c+=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=b[c-1])
            {
               
                b[c]=arr[i];
                c+=1;
                
            }
        }
        for(int i=0;i<c;i++)
            arr[i]=b[i];
        return c;
    }