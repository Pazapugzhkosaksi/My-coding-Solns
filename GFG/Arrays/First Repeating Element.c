// Time Limit Exceeded (132/142) 
// Expected O(n) O(n)
int firstRepeated(int arr[], int n) {
        
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(!(arr[i]^arr[j]))
                    return i+1;
            }
        }
        return -1;
    }