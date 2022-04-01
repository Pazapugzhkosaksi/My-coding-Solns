	

	int isPalindrome(string S)
	{
	    int i=0,j=S.length()-1;
	    while(i<=j)
	    {
	       // cout<<S[i]<<","<<S[j]<<"\n";
	        if(S[i]!=S[j])
	            return 0;
	        i++;
	        j--;
	    }
	    return 1;
	}
