 // Optimal Approach 
 vector<int> leaders(int a[], int n){
        vector<int>arr;
        arr.push_back(a[n-1]);
        int max=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=max)
            {
                arr.push_back(a[i]);
                max=a[i];
            }
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }