// 269/420 cases passed 

 int missingNumber(int arr[], int n) 
    { 
        map<int,int> m;
        for(int i=1;i<=n;i++)
            m[i]=0;
        for(int i=0;i<n;i++)
            m[arr[i]]+=1;
        for(auto i:m)
        {
            if(i.second==0)
                return i.first;
        }
        return n+1;
    } 

 
// Successful approach but takes O(N*LogN) time
// T.C - O(N)   S.C - O(1)
int missingNumber(int arr[], int n) 
    { 
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
            {
                arr[i]=INT_MAX;
            }
        }
        sort(arr,arr+n);
        if(arr[0]!=1)
            return 1;
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(arr[i+1]-arr[i]>1)
                    return arr[i]+1;
            }
            return n+1;
        }
    } 

// GFG Approach 1  TC O(N)   SC O(N)
int firstMissingPos(int A[], int n)
{
 
    // To mark the occurrence of elements
    bool present[n + 1] = { false };
 
    // Mark the occurrences
    for (int i = 0; i < n; i++) {
 
        // Only mark the required elements
        // All non-positive elements and the elements
        // greater n + 1 will never be the answer
        // For example, the array will be {1, 2, 3} in the
        // worst case and the result will be 4 which is n + 1
        if (A[i] > 0 && A[i] <= n)
            present[A[i]] = true;
    }
 
    // Find the first element which didn't appear in the
    // original array
    for (int i = 1; i <= n; i++)
        if (!present[i])
            return i;
 
    // If the original array was of the type {1, 2, 3} in
    // its sorted form
    return n + 1;
}