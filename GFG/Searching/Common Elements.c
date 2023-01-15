// Successful and optimal approach 
//T.C O(n1+n2+n3)
//S.C O(n1+n2+n3)
// But can be optimized further in terms of space
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> ans;
    map<int,int> mp;
    for(int i=0;i<n1;i++)
    {
        mp[A[i]]=1;
    }
    for(int i=0;i<n2;i++)
    {
        if(mp[B[i]]!=3 && mp[B[i]]==1) // first condition ensures that two elements in the same array doesnt update the map repeatedly 
        {                              // second condition ensures that the element that is updated is already present in the first array
            mp[B[i]]+=2;
        }
    }
    for(int i=0;i<n3;i++)
    {
        if(mp[C[i]]!=6 && mp[C[i]]==3)
        {
            mp[C[i]]+=3;
            ans.push_back(C[i]);
        }
    }
            
    if(ans.empty())
        ans.push_back(-1);
    return ans;
}