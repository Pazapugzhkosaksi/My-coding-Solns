// Successful approach (time only) O(n)
// Time O(N) Space O(N)
vector<int> duplicates(int arr[], int n) {
       unordered_map<int,int> umap;
       vector<int> res;
       for(int i=0;i<n;i++)
       {
           if(umap.find(arr[i])== umap.end())
           {
               umap[arr[i]]=i;
           }
           else
           {
               umap[arr[i]]=-1;
           }
       }
       for(auto it: umap)
       {
            if(it.second==-1)
                res.push_back(it.first);
       }
       if(res.empty())
          res.push_back(-1);
       sort(res.begin(),res.end());
       return res; 
    }

// Improved Approach

    vector<int> duplicates(int arr[], int n) {
       unordered_map<int,int> umap;
       vector<int> res;
       for(int i=0;i<n;i++)
       {
           if(umap.find(arr[i])== umap.end())
           {
               umap[arr[i]]=i;
           }
           else
           {
               if(umap[arr[i]]!=-1)             // Eliminated iterating the map
                    res.push_back(arr[i]);
               umap[arr[i]]=-1;
               
           }
       }
       if(res.empty())
          res.push_back(-1);
       sort(res.begin(),res.end());
       return res; 
    }

  // Another Approach
    vector<int> duplicates(int arr[], int n)
    {
       int m[n] = {0};
       for(int i=0; i<n;i++) m[arr[i]]++;
       vector<int> ans;
       for(int i=0; i<n;i++)
       if(m[i] > 1) ans.push_back(i);
          
       if(ans.empty()) return {-1};
       return ans;
    }
   