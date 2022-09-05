
// Successful Approach
// A variation of Kadane's Algorithm
int smallestSumSubarray(vector<int>& a){
      int mini=a[0],sum=0,s=0;
      for(int i=0;i<a.size();i++)
      {
          sum+=a[i];
          if(sum<mini)
            mini=sum;
          if(sum>0)
          {
            sum=0;
          }
      }
      return mini;
  }


  // Editor's solution
  // Also a varitation of Kadane's Algorithm

  int smallestSumSubarr(int arr[], int n)
{
    // to store the minimum value that is ending
    // up to the current index
    int min_ending_here = INT_MAX;
     
    // to store the minimum value encountered so far
    int min_so_far = INT_MAX;
     
    // traverse the array elements
    for (int i=0; i<n; i++)
    {
        // if min_ending_here > 0, then it could not possibly
        // contribute to the minimum sum further
        if (min_ending_here > 0)
            min_ending_here = arr[i];
         
        // else add the value arr[i] to min_ending_here   
        else
            min_ending_here += arr[i];
         
        // update min_so_far
        min_so_far = min(min_so_far, min_ending_here);           
    }
     
    // required smallest sum contiguous subarray value
    return min_so_far;
}