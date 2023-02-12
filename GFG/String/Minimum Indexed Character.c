// Successful and Optimal Approach
int minIndexChar(string str, string patt)
{
    int arr[26];
    memset(arr,-1,26*sizeof(int));
    for(int i=0;i<patt.length();i++)
    {
        arr[patt[i]-'a']=1;
    }
    for(int i=0;i<str.length();i++)
    {
        if(arr[str[i]-'a']==1)
            return i;
    }
    return -1;
}

// Peer Approach
int minIndexChar(string str, string patt)
{
    int ans=-1;
    vector<int> v;
    for(int i=0; i<patt.length(); i++)
    {
        if(str.find(patt[i])!=-1)
            v.push_back(str.find(patt[i]));
    }
    if(v.empty())
        return -1;
    sort(v.begin(),v.end());
    return v[0];
}