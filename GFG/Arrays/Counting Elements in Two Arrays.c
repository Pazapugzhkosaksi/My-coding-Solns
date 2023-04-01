// Successful and Optimal Approach
// T.C O((n+m)*Log n)
// S.C O(m)
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[],int m, int n)
{
    sort(arr2,arr2+n);
    vector<int> counts;
    for(int i=0;i<m;i++)
    {
        // upper_bound returns an iterator,
        // So as to get the integer value, we need to subtract the iterator at the beginning
        // Eg in case of array - arr2 , in case of vector arr2.begin()
        int ind = upper_bound(arr2,arr2+n,arr1[i])-arr2;
        counts.push_back(ind);
    }
    return counts;
}   

// Peer Approach using binary search
// Binary search tweaked version to find upperbound
int binarysearch(int arr2[],int n,int x){
        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr2[mid]<=x)
                l=mid+1;
            else
                h=mid-1;
        }
        return l;
    }
    
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[],int m, int n)
    {
        sort(arr2,arr2+n);
        vector<int> counts;
        for(int i=0;i<m;i++){
        
            counts.push_back(binarysearch(arr2,n,arr1[i]));
        }
        return counts;
    }   





// 300 out of 432
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
       map<int,int> mp;
       for(int i=0;i<m;i++)
       {
           mp[arr1[i]]=0;
       }
       for(int i=0;i<n;i++)
       {
           for(auto it:mp)
           {
               if(arr2[i]<=it.first)
               {
                   mp[it.first]+=1;
               }
           }
       }
       vector<int> counts;
       for(int i=0;i<m;i++)
       {
           counts.push_back(mp[arr1[i]]);
       }
       return counts;
    }

// 307 out of 432
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
       vector<int> counts;
       int c;
       for(int i=0;i<m;i++)
       {
           c=0;
           for(int j=0;j<n;j++)
           {
               if(arr2[j]<=arr1[i])
                   c+=1;
           }
        counts.push_back(c);
           
       }
    return counts;
    }

// 420 out of 432 cases
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[],int m, int n)
{
    map<int,int> mp;
    vector<int> temp;
    for(int i=0;i<m;i++)
          temp.push_back(arr1[i]);
    sort(temp.begin(),temp.end());
    sort(arr2,arr2+n);
     vector<int> counts;
     int c=0;
     for(int i=0;i<m;i++)
     {
        while(arr2[c]<=temp[i] && c<n)
            c+=1;
        mp[temp[i]]=c;
     }
     for(int i=0;i<m;i++)
        counts.push_back(mp[arr1[i]]);
     return counts;
}

