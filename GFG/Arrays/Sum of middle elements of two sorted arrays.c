// Successful Approach but not optimal
	int findMidSum(int ar1[], int ar2[], int n) 
	{
      int i=0,j=0,c=0;
      int arr[(2*n)+1];
      while(i<n && j<n)
      {
          if(ar1[i]<=ar2[j])
          {
              arr[c++]=ar1[i++];
          }
          else
             arr[c++]=ar2[j++];
          
      }
      while(i<n)
        arr[c++]=ar1[i++];
      while(j<n)
        arr[c++]=ar2[j++];
      return arr[c/2]+arr[(c/2)-1];
    }