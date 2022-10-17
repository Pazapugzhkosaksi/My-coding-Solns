// 21/1060 cases passed
static bool my_compare(string a, string b)
    {
    // Check if a string is present as
    // prefix in another string, then
    // compare the size of the string
    // and return the larger size
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
 
        return a.size() > b.size();
 
    // Else return lexicographically
    // smallest string
    else
        return a < b;
    }
    
    void recPermute(int ind,vector<string> &ans,string S)
    {
	    if(ind==S.length())
	    {
	        ans.push_back(S);
	        return;
	    }
	    for(int i=ind;i<S.length();i++)
	    {
	     swap(S[i],S[ind]);
	     recPermute(ind+1,ans,S);
	     swap(S[i],S[ind]);
	    }
    }
    
    long long findRank(string str) {
        int ind=0;
	    vector<string> ans,res;
	    recPermute(ind,ans,str);
	    sort(ans.begin(),ans.end(),my_compare);
	    res.push_back(ans[0]);
	    for(int i=1;i<ans.size();i++)
	    {
	        if(ans[i]==res[res.size()-1])
		        continue;
		    res.push_back(ans[i]);
	    }
	    long long s;
	    for(long long i=0;i<res.size();i++)
	    {
	        if(str==res[i])
	            s=i+1;
	    }
	    return s;
    }