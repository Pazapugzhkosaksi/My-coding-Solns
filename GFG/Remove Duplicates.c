

// My approach (Successful but not optimized wrt to criteria)
string removeDups(string S) 
	{
	    int a[26];
	    string b;
	    memset(a,0,26*sizeof(int));
	    for(int i=0;i<S.length();i++)
	    {
	        if(a[tolower(S[i])-97]==0)
	        {
	            a[tolower(S[i])-97]=1;
	            b.push_back(S[i]);
	        }
	        else
	            continue;
	    }
	    return b;
	}