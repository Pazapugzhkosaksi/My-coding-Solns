// Successful and Optimal Approach
// T.C O(N) S.C O(N)
vector<int> print_next_greater_freq(int arr[],int n)
{                     
    map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]+=1;
    }
    stack<pair<int,int>> s;
    vector<int>res;
    s.push({arr[n-1],freq[arr[n-1]]});
    res.push_back(-1);
    for(int i=n-2;i>=0;i--)
    {
         while(!s.empty() && freq[arr[i]]>=s.top().second)
                s.pop();
        if(s.empty())
            res.push_back(-1);
        else
            res.push_back(s.top().first);
        s.push({arr[i],freq[arr[i]]});
    }
    reverse(res.begin(),res.end());
    return res;
}