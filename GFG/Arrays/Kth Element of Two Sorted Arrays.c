// Successful but not optimal
// This is also the approach for merging two sorted arrays
	int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
         int i=0,j=0,c=0;
         int arr[n+m+1];
         while(i<n && j<m)
         {
             if(arr1[i]<=arr2[j])
             {
                arr[c] = arr1[i];
                i++;
                c+=1;
             }
             else
             {
                arr[c] = arr2[j]; 
                j++;
                c+=1;
             }
             
         }
         while(i<n)
         {
             arr[c] = arr1[i];
             i++;
             c+=1;
         }
         while(j<m)
         {
              arr[c] = arr2[j]; 
                j++;
                c+=1;
         }
         return arr[k-1];
    }

    // Space Optimised version of the above approach
     int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
         int i=0,j=0,c=0;
         while(i<n && j<m)
         {
             if(arr1[i]<=arr2[j])
             {
                c++;
                if(c==k)
                    return arr1[i] ;
                i++;
                 
             }
             else
             {
                c++;
                if(c==k)
                    return arr2[j];
                j++;
             }
             
         }
         while(i<n)
         {
             c+=1;
             if(c==k)
                return arr1[i];
             i++;
         }
         while(j<m)
         {
                
                c+=1;
                if(c==k)
                    return arr2[j]; 
                j++;
             
         }
    }