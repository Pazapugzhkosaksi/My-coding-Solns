

// My succesful approach (Not optimized)
string removeChars(string string1, string string2) {
         
         string s;
         for(int i=0;i<string1.length();i++)
         {
             for(int j=0;j<string2.length();j++)
             {
                 if(string1[i]==string2[j])
                 {
                     string1[i]='1';
                 }
             }
         }
         int c=0;
         for(int i=0;i<string1.length();i++)
         {
             
             if(string1[i]!='1')
             {
                s.push_back(string1[i]);
             }
         }
         return s;
    }


// My Second Aproach

     string s;
         int arr[27];
         memset(arr,0,27*sizeof(int));
         for(int i=0;i<s2.length();i++)
         {
              arr[s2[i]-97]+=1;
         }
         for(int i=0;i<s1.length();i++)
         {
            if(arr[s1[i]-97]==0)
                s.push_back(s1[i]);
         }
         
         return s;