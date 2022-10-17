// Non-optimal solution
void arrange(long long arr[], int n) {
        long long temp[n+1000];
        for(int i=0;i<n;i++)
        {
            temp[i]=arr[arr[i]];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=temp[i];
        }
        
    }