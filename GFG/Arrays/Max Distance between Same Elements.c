// Optimal Solution
int maxDistance(int arr[], int n)
    {
        unordered_map<int,int> umap;
        int max_dist=0,dist;
        for(int i=0;i<n;i++)
        {
            if(umap.find(arr[i])==umap.end())
            {
                umap[arr[i]]=i;
            }
            else
            {
                unordered_map<int,int>::const_iterator iter=umap.find(arr[i]);
                dist=i-iter->second;
                if(dist>max_dist)
                    max_dist=dist;
            }
        }
        return max_dist;
    }