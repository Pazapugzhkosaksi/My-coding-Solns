
// My successful Approach 
bool arraySortedOrNot(int arr[], int n) {
      
       int maxi=-65535,f;
       for(int i=0;i<n;i++)
       {
          f=0;
          if(arr[i]>=maxi)
          {
              maxi=arr[i];
              f=1;
          }
          if(f==0)
            return false;
       }
       return true;
    }

    bool arraySortedOrNot(int arr[], int n) {
      
       for(int i=0;i<n-1;i++)
       {
          if(arr[i]>arr[i+1])
            return false;
       }
       return true;
    }