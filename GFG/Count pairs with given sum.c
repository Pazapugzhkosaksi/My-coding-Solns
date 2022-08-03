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
                    //cout<<it.second<<"+"<<s<<"="<<endl;
                    c+=1;
                }
            }
        }
        return c;
    }