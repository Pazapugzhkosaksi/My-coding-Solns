// Successful and Optimal Approach

static bool compare(pair<int,int> a,pair<int,int> b)
{
    if(a.second>b.second)
        return true;
    else if(a.second<b.second)
        return false;
    else if(a.first>b.first)
        return true;
    return false;
}
    
vector<int> topK(vector<int>& nums, int k) {
    map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]+=1;
    }
    vector<pair<int,int>> res;
    for(auto it: mp)
    {
        res.push_back({it.first,it.second});
    }
    sort(res.begin(),res.end(),compare);
    vector<int >ans;
    int i=0;
    for(auto it:res){
      if(i<k)    
         ans.push_back(it.first);
      i+=1;
    }
        
    return ans;
        
}