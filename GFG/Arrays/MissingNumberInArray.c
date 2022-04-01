
// O(NlogN) soln but passed all cases
int MissingNumber(vector<int>& array, int n) {
        sort(array.begin(),array.end());
        for(int i=0;i<n;i++)
        {
            if(array[i]!=i+1)
                return i+1;
        }
    }



// Other Soln's
   
   int MissingNumber(int array[], int n) {
       // Your Code Here
       int sum = n *(n+1)/2;
       for(int i = 0; i < n-1; i++){
           sum = sum - array[i];
       }
       
       return sum;
    }


// Other Soln's

    int count  = 0, count1 = 0;
      for( int i = 1; i<=n; i++)
        {
          count+=i;
        }
        for( int i = 0; i<n-1; i++)
        {
          count1+= array[i];
        }
        return Math.abs(count-count1);

 // Optimized Soln involving bitmagic

     int getMissingNo(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];
 
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
 
    return (x1 ^ x2);
}