

// This approach will work if insertion only has to be performed
int checkPalindrome(string s,int low)
    {
        int i=low,j=s.length()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
                return 0;
            i++;
            j--;
        }
        return 1;
    }
    int countMin(string str){
       
       string s=str;
       int counter=0;
       for(int j=0;j<str.length()-1;j++)
       {
        if(checkPalindrome(str,j))
            break;
        else
           counter+=1;      
            
       }
       return counter;
    }