
// Succesfull BruteForce Approach


	string removeDuplicates(string str) {
	   int counts_small[26];
	   int counts_caps[26];
	   memset(counts_small,0,26*sizeof(int));
	   memset(counts_caps,0,26*sizeof(int));
	   string s="";
	   for(int i=0;i<str.length();i++)
	   {
	       if(str[i]>=97 && str[i]<=122)
    	       counts_small[str[i]-'a']+=1;
	       if(str[i]>=65 && str[i]<=91)
	           counts_caps[str[i]-'A']+=1;
	   }
	   for(int i=0;i<str.length();i++)
	   {
	        if(str[i]>=97 && str[i]<=122)
    	    {
    	        if(counts_small[str[i]-'a']>=1)
    	        {
    	            s+=str[i];
    	            counts_small[str[i]-'a']=0;
    	        }
    	          
    	    }
	       if(str[i]>=65 && str[i]<=90)
	       {
	            if(counts_caps[str[i]-'A']>=1)
    	        {
    	            s+=str[i];
    	            counts_caps[str[i]-'A']=0;
    	        }      
	       } 
	   }
	   return s;  
	}