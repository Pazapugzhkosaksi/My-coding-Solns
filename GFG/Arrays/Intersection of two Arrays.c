// Successful Approach
int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_map<int,int>umap;
        int c=0;
        if(n>m)
        {
            for(int i=0;i<m;i++)
            {
                if(umap.find(b[i])==umap.end())
                    umap[b[i]]=1;
                else
                    umap[b[i]]+=1;
            }
            for(int i=0;i<n;i++)
            {
                if(umap.find(a[i])!=umap.end())
                {
                    c++;
                    umap.erase(a[i]);
                }
            }
            return c;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(umap.find(a[i])==umap.end())
                    umap[a[i]]=1;
                else
                    umap[a[i]]+=1;
            }
            for(int i=0;i<m;i++)
            {
                if(umap.find(b[i])!=umap.end())
                {
                    c++;
                    umap.erase(b[i]);
                }
            }
            return c;
        }
    }