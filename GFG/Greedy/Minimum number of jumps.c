// GFG Approach 
int minJumps(int arr[], int n){
    
       // cannot proceed anyways 
       if(arr[0]==0)
         return -1;

       // one straight jump will lead us to end of array
       if(arr[0]>=n-1)
         return 1;
       // already at the end of array so no jump needed
       if(n<=1)
         return 0;
       
       // Since arr[0] is not 0 and at the same time not greater than n
       // a jump is guaranteed so we are initializing it to 1
       int jump=1;

  
       int maxReach=arr[0];     
       int steps=arr[0];

       for(int i=1;i<n;i++)
       {
          if(i==n-1)
            return jump;
       
          // to check if the end of array is reachable from that index we are subtracting with i
          if(arr[i]>=(n-1)-i) 
            return jump+1;   
                             
           //gives us the maximum reachable index from the current index 
           maxReach=max(maxReach,i+arr[i]);
           
           steps--;

           if(steps==0)
           {
              jump++;
           
               // it denotes that current index is greated than 
               // the reachable index at that point and hence
               // can never reach the end of the array
               if(i>=maxReach)
                  return -1;

              // difference gives us the maximum number of steps we can take from that index 
              steps=maxReach-i;
           }
       }
       return -1;
    }