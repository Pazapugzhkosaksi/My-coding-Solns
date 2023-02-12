
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