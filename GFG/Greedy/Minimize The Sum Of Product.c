
// My Soln

long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        long long int s=0;
        for(int i=0;i<n;i++)
        {
           // cout<<a[i]<<" ";
            s+=(a[i]*b[i]);
        }
        return s;
    }

// Alternate Solutions

  long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort(b,b+n);
        long long answer=0;
        for(int i=0,j=n-1;i<n;i++,j--)
            answer+=(a[i]*b[j]);
        return answer;
    }


     long long int minValue(int a[], int b[], int n)
   {
       // Your code goes here
      sort(a, a+n);
      sort(b, b+n);
      long long int sum =0; 
      for(int i=0; i<=n-1; i++){
          sum+=a[i]*b[n-i-1];
      }
      return sum;
   }