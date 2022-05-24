// Successful Approach
vector<int> countFreq(int arr[], int n) 
{ 
        sort(arr,arr+n);
        vector<int> a;
        int cs=0,f=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]==arr[i])
            {
                f+=1;
            }
            else
            {
                cs+=f;
                a.push_back(cs);
                f=1;
            }
        }
        cs+=f;
        a.push_back(cs);
        return a;
} 
//Peer Approach using map
vector<int> countFreq(int a[], int n) 
{ 
        // Complete the function
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int sum=0;
        for(auto it:mp){
            sum+=it.second;
            ans.push_back(sum);
        }
    return ans;
} 