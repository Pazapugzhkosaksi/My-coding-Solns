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


// Successful Approach
int firstRepeated(int arr[], int n) {
        unordered_map<int,int> umap;
        int min=65535;
        for(int i=0;i<n;i++)
        {
            if(umap.find(arr[i])==umap.end())
                umap[arr[i]]=i;
            else
            {
                unordered_map<int,int>::const_iterator iter=umap.find(arr[i]);
                //cout<<iter->first<<":"<<iter->second<<endl;
                if(iter->second<min)
                    min=iter->second;
                //return iter->second;
            }
        }
        if(min!=65535)
            return min+1;
        else
            return -1;
    }