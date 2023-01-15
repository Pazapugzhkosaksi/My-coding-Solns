// Successful Approach but not optimal according to time complexity 
// T.C of approach = O(N*N) 
// Required O(N*Log(N))
static bool cmp(pair<int,int> &a, pair<int,int>&b)
{
        if(a.second>b.second)
            return true;
        else if(a.second==b.second && a.first<b.first)
            return true;
        return false;
}
    
vector<int> sortByFreq(int arr[],int n)
{
        map<int,int> m;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]+=1;
        }
        vector<pair<int,int>> MM;
        for (auto it : m) {
            MM.push_back(it);
        }
        sort(MM.begin(),MM.end(),cmp);
        for(int i=0;i<MM.size();i++)
        {
            for(int j=0;j<MM[i].second;j++)
                a.push_back(MM[i].first);
        }
        return a;
}