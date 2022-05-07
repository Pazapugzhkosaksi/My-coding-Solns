char nonrepeatingCharacter(string S)
    {
      int counts[26];
      memset(counts,-1,sizeof(counts));
      for(int i=0;i<S.length();i++)
      {
          if(counts[S[i]-'a']==-1)
          {
              counts[S[i]-'a']=i;
          }
          else
              counts[S[i]-'a']=-65535;
      }
      int min=INT_MAX,ind=-1;
      for(int i=0;i<26;i++)
      {
          if(counts[i]>-1 && counts[i]<min)
          {
            min=counts[i];
            ind=i;
          }
      }
      if(min!=INT_MAX)
          return ind+'a';
      else
          return '$'; 
    }