// Successful Approach
static bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second > b.second;
}
    
    
string secFrequent (string arr[], int n)
{
        map<string,int> m;
        string s;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]+=1;
          //  cout<<arr[i]<<" ";
        }
        
        vector<pair<string, int> > A;
  
        for (auto it : m) {
            A.push_back(it);
        }
        sort(A.begin(), A.end(), cmp);
        return A[1].first;
}