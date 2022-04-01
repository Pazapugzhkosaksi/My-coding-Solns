
// Bruteforce approach that passed all test cases but did not meet the specified criteria
int findExtra(int a[], int b[], int n) {
        
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                return i;
            }
        }
        return n-1;
    }

// Try Implementing Using Binary Search