
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