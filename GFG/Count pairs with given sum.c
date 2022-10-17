// 151/263 cases passed
int getPairsCount(int arr[], int n, int k) {
        map<int,int> m;
        int c=0;
        for(int i=0;i<n;i++)
            m[i]=arr[i];
        for(int i=0;i<n;i++)
        {
            int s=arr[i];
            for(auto it:m)
            {
                if(it.first>i && it.second+s==k)
                {
                    c+=1;
                }
            }
        }
        return c;
    }

// 178/263 cases passed
vector<pair<int,int>> a;
        int req=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(arr[i]+arr[j]==k && i!=j)
                {
                    pair<int,int> p(arr[i],arr[j]);
                    a.push_back(p);
                }
            }
        }
        return a.size();

// Referred solution from GFG
 int getPairsCount(int arr[], int n, int k) {
        map<int,int>m;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        int c=0;
        for(int i=0;i<n;i++)
        {
            // this will add all the pairs of (a,b) and (b,a) by adding their frequencies
            c+=m[k-arr[i]];
            // this check ensures that the same pair (a,a) will not be considered
            if(k-arr[i]==arr[i])
                c-=1;
        }
        return c/2;
}

// Alternative solution from GFG
int getPairsCount(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end()) {
            count += m[k - arr[i]];
        }
        m[arr[i]]++;
    }
    return count;
}