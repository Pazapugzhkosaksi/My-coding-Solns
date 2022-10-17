100/117 cases with bruteforce approach
long long int inversionCount(long long arr[], long long n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                c+=1;
            }
        }
    }
    return c;
}

// 100/117 cases 

// although this might look as a linear solution it is actually not as the
// user is traversing the array from the beginning after swapping elements.
long long int inversionCount(long long arr[], long long N)
   {
       // Your Code Here
       long long c=0;
       long long i=1;
       while(i<N){
           if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
               c++;
               i=0;
           }
           i++;
       }
       return c;
   }



// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.


// Approach using merge sort 100/117 cases
long long int merge(long long int arr[],long long int temp[],long long int left,long long int mid,
          long long int right)
{
    long long int i, j, k;
    long long int inv_count = 0;
  
    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
  
            /* this is tricky -- see above
            explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }
  
    /* Copy the remaining elements of left subarray
(if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];
  
    /* Copy the remaining elements of right subarray
       (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];
  
    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
  
    return inv_count;
}
  

long long int mergeSort(long long int arr[],long long int temp[],long long int left,long long int right)
{
    long long int mid, inv_count = 0;
    if (right > left) {
        /* Divide the array into two parts and
        call _mergeSortAndCountInv()
        for each of the parts */
        mid = (right + left) / 2;
  
        /* Inversion count will be sum of
        inversions in left-part, right-part
        and number of inversions in merging */
        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);
  
        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

long long int inversionCount(long long arr[], long long N)
{
    long long int temp[N];
    long long int c; 
    c= mergeSort(arr,temp,0,N);
    return c;
}
