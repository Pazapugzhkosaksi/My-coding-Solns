

// My bruteforce approach (Successful but not optimal acc to criteria) 
string printMinIndexChar(string S, string patt)
	{
	   string s; 
	   for(int i=0;i<S.length();i++)
	   {
	       for(int j=0;j<patt.length();j++)
	       {
	           if(S[i]==patt[j])
	           {
	                s.push_back(S[i]);
	                return s;
	           }
	       }
	   }
	   return "$";

// Revisit this problem after learning hashmap