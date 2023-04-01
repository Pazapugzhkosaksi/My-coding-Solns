// this approach uses a lot of space
class Solution
{
	public:
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
    	
	void recPermute(vector<char> &ds,int freq[],vector<string> &ans,string S)
	{
	    if(ds.size()==S.length())
	    {
	        string a;
	        for(int j=0;j<ds.size();j++)
	        {
	            a+=ds[j];
	        }
	        ans.push_back(a);
	        return;
	    }
	    for(int i=0;i<S.length();i++)
	    {
	        if(!freq[i]){
	            ds.push_back(S.at(i));
	            freq[i]=1;
	            recPermute(ds,freq,ans,S);
	            freq[i]=0;
	            ds.pop_back();
	        }
	    }
	}
	
	/*
                                                                       ABCD

                                                      A [1,0,0,0] i=0
                                                  / (branch for i=1)          \       
                                                    AB[1,1,0,0]  i=1   
 					/  (Branch for i=2)                     |
                        ABC[1,1,1,0] i=2                    |
							/		   \                    | 
                ABCD[1,1,1,1]  i=3     	\                   |
                                         ABCD[1,1,1,1]i=3   |                      
															|
                                                     branch for i=3
                                                ABD[1,1,0,1] i=3
                                            /
    									ABDC[1,1,1,1]


    */
    
	vector<string>find_permutation(string S)
	{
		vector<char>ds;
		int freq[S.length()];
		for(int i=0;i<S.length();i++)
		    freq[i]=0;
	    vector<string>ans;
	    recPermute(ds,freq,ans,S);
	    sort(ans.begin(),ans.end(),my_compare);
	    vector<string> res;
	    for(int i=0;i<ans.size();i++)
	    {
	        if(res.size()==0)
	        {
	            res.push_back(ans[i]);
	            continue;
	        }
	        if(ans[i]!=res[res.size()-1])
	            res.push_back(ans[i]);
	    }
		return res;    
	}
};

// Optimal Approach in terms of space complexity

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
	    
vector<string>find_permutation(string S)
{
	int ind=0;
	vector<string> ans,res;
	recPermute(ind,ans,S);
	sort(ans.begin(),ans.end(),my_compare);
	res.push_back(ans[0]);
	for(int i=1;i<ans.size();i++)
	{
	    if(ans[i]==res[res.size()-1])
		    continue;
		res.push_back(ans[i]);
	}
	return res;
}

/*
															ABC
              swap A with A                       Swap B with A                        swap C with A
			  (A,B,C)                 			 (B,C,A)                               (C,A,B)

    swap B with B     B with C            C with C       C with A 			A with A         A with B
	    (A,B,C)       (A,C,B)               (B,C,A)     (B,A,C)				   (C,A,B)         (C,B,A)

     C with C         B with B            A with A       A with A             B with B       B with B
    (A,B,C)           (A,C,B)              (B,C,A)      (B,A,C)               (C,A,B)          (C,B,A)  


*/