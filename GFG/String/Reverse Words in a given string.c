// Successful but not optimal in both time and space
string reverseWords(string S) 
{ 
         vector<string> arr;
         string s="";
         for(int i=0;i<S.length();i++)
         {
             if(S[i]=='.' )
             {
                arr.push_back(s);
                s="";
                continue;
             }
             s+=S[i];
         }
         arr.push_back(s);
         s="";
         while(arr.size()!=0)
         {
             string a=arr[arr.size()-1];
             s+=a;
             arr.pop_back();
             if(arr.size()!=0)
                s+='.';
         }
        
         return s;
} 