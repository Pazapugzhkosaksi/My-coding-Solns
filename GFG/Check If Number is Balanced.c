//                           Check If Number is Balanced

// My solution

bool balancedNumber(string N)
	{
	    //bool ans=false;
	    int mid=N.length()/2;
	    int s1=0,s2=0;
	    //cout<<mid;
	    for(int i=0;i<mid;i++)
	    {
	        int x=N.at(i) -'0';
	        s1+=x;
	    }
	    for(int i=mid+1;i<N.length();i++)
	    {
	        int x=N.at(i) -'0';
	        s2+=x;
	    }
	    
	    return (s1==s2)?true:false;
	}

// Alternative Solns

// #1

	bool balancedNumber(string a)
{
    // code here
    int i=0,j=a.length()-1;
    int suml=0,sumr=0;;
    while(i<=j){
        suml+=(a[i]-'0');
        i++;
        sumr+=(a[j]-'0');
        j--;
        
    }
    
    if(suml==sumr){
        return true;
    }
    return false;
}


// #2

