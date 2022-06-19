// Bruteforce Approach 32/85 cases
    void update(int a[], int n, int updates[], int k)
    {
        for(int i=0;i<k;i++)
        {
            for(int j=updates[i]-1;j<n;j++)
                a[j]+=1;
        }
            
    }

// Successful Soln
    void update(int a[], int n, int updates[], int k)
    {
       for(int i=0;i<k;i++)
           a[updates[i]-1]+=1;
       
        int ne=a[0];
        for(int i=1;i<n;i++)
        {
            a[i]+=ne;
            ne=a[i];
        }
    }
// Peer Soln
    void update(int a[], int n, int updates[], int k)
    {
       for(int i = 0; i<k; i++)
           a[updates[i]-1]++;
       for(int i = 1; i<n; i++)
           a[i] += a[i-1];
    }