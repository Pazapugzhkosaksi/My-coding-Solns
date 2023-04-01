// Successful and Optimal Approach
static bool cmp(string a,string b){
    return a+b>b+a;
}

string printLargest(vector<string> &arr) {
    sort(arr.begin(),arr.end(),cmp);
    string ans="";
    for(auto it:arr)
        ans+=it;
    return ans;
    
}