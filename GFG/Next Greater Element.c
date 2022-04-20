// Bruteforce Approach (106/204)
vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>res;
        for(int i=0;i<n-1;i++)
        {
            int j;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]>arr[i])
                {
                    res.push_back(arr[j]);
                    break;
                }   
            }
            if(j==n)
                res.push_back(-1);
        }
        res.push_back(-1);
        return res;
    }