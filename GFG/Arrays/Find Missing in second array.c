// Wrong Approach but learnt how to sort vecotr of  pairs by second element 
	static bool sortbysec(pair<long long,long long> &a,pair<long long,long long> &b )
	{
	    return a.second<b.second;
	}
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	     map<long,long long> m;
	     for(int i=0;i<N;i++)
	     {
	         m[A[i]]=i;
	     }
	     vector<pair<long long,long long>> v;
	     for(int i=0;i<M;i++)
	     {
	         if(m.find(B[i])!=m.end())
	            m.erase(B[i]);
	     }
	     for(auto itr:m)
	     {
	        pair<long long,long long> tmp(itr.first,itr.second);  
	        v.push_back(tmp);
	     }
	    sort(v.begin(), v.end(), sortbysec);
	    vector<long long> a;
	    for(int i=0;i<v.size();i++)
	    {
	        a.push_back(v[i].first);    
	        //cout<<v[i].first<<" "<<v[i].second<<endl;
	    }
	    
	  
	    return a;
	} 

// Successful soln

	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    map<long long,long long> m;
	    vector<long long> a;
	    for(int i=0;i<M;i++)
	        m[B[i]]=1;
	    for(int i=0;i<N;i++)
	    {
	        if(m.find(A[i])==m.end())
	            a.push_back(A[i]);
	    }
	    return a;
	} 