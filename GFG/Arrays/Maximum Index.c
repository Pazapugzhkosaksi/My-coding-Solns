
// Optimal Approach based on GFG
// T.C O(N) S.C O(N)
int maxIndexDiff(int arr[], int n) {
   
   int maxi=-1;
   vector<int> minArray(n,0),maxArray(n,0);
        
   minArray[0]=arr[0];
   for(int i=1;i<n;i++)
      minArray[i]=min(arr[i],minArray[i-1]);
        
   maxArray[n-1]=arr[n-1];
   for(int i=n-2;i>=0;i--)
      maxArray[i]=max(arr[i],maxArray[i+1]);
        
   int i=0,j=0;
   while(i<n && j<n){
         
         if(minArray[i]<=maxArray[j])
         {
             maxi=max(j-i,maxi);
             j+=1;
         }
         else{
             i+=1;    
         }
         
  }
  return maxi;
}


// Successful Approach but not optimal
int maxIndexDiff(int arr[], int n) {
        int maxi=0;
        for(int i=0;i<n;i++)
        {
           int j=n-1;
           while(j>=i)
           {
               if(arr[j]>=arr[i])
               {
                   maxi=max(j-i,maxi);
                   break;
               }
               j--;
           }
        }
        return maxi;
    }

// BruteForce Approach 104/1114 cases
int maxIndexDiff(int arr[], int n) {
      int max=0;
      for(int i=0;i<n-1;i++)
      {
          for(int j=i+1;j<n;j++)
          {
             if(arr[i]<=arr[j] && j-i>max)
             {
                max=j-i;   
             }
          }
      }
      return max;
    }