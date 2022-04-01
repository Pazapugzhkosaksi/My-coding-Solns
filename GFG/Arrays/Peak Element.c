
// Straightforward Approach // Not optimized
int peakElement(int arr[], int n)
{
   int p=0;    
   for(int i=1;i<n;i++)
   {
       if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            p = i;
       if(i==n-1 && arr[i]>arr[i-1])
            p=n-1;
   }
   return p;
}