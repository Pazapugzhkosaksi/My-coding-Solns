// My successful Approach
class Solution {
  public:
   
    int isPalindrome(string s,int l,int h)
    {
        while(l<=h)
        {
            if(s[l]!=s[h])
                return 0;
            l+=1;
            h-=1;
        }
        return 1;
    }
  
    string longestPalin (string S) {
       
        if(S.length()==1)
            return S;
        int res=isPalindrome(S,0,S.length()-1);
        if(res==1)
            return S;
        int s=0,e=0,f=0;
        // This loop is for iterating the string of sizes from length 2...s.length()-1
        for(int k=S.length()-1;k>=2;k--)
        {
            
        
            // Checking the substring for the first occurence of the palindrome of the given length;
            // If last occurence of palindrom is required for the same length, [traverse the below loop in a reverse order]
            for(int i=0;i<=S.length()-k;i++)
            {
              //   cout<<"I:"<<i<<" "<<"I+K:"<<i+k-1<<endl;
                 if(isPalindrome(S,i,i+k-1))
                 {
                    s=i;
                    e=i+k-1;
                    f=1;
                    break;
                 }
            }
            if(f==1)
                break;
        }
        string st;
        for(int i=s;i<=e;i++)
            st+=S[i];
       
        return st;
       
    }
};