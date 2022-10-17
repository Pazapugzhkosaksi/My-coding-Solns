// 202/203 cases passed, both time and space is optimal in this approach
// by changing the declaration from map to unordered_map , the one test case got passed.
// This is because element access time on unordered_map is O(1) whereas for map it is O(logn)
int firstNonRepeating(int arr[], int n) 
    { 
        unordered_map<int,int>m; //in this case efficient than map
        for(int i=0;i<n;i++)
        {
            m[arr[i]]+=1;
            if(m[arr[i]]>1)
                arr[i]=0;
            
        }
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]==1)
                return arr[i];
        }
        return 0;
        
    } 

// A much simpler solution
int firstNonRepeating(int a[], int n) 
{ 
       map<int,int> mp;
       for(int i=0;i<n;i++)
           mp[a[i]]++;
       for(int i=0;i<n;i++)
       {
           if(mp[a[i]]==1)
               return a[i];
       }
       return 0;
} 