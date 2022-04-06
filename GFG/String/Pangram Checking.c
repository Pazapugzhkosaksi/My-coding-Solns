 bool checkPangram (string &str) {
     int counts[26];
     memset(counts,0,26*sizeof(int));
     for(int i=0;i<str.length();i++)
     {
         if(islower(str[i]))
            counts[str[i]-'a']+=1;
         if(isupper(str[i]))
            counts[str[i]-'A']+=1;
     }
     for(int i=0;i<26;i++)
     {
         if(counts[i]==0)
            return 0;
     }
     return 1;
    }