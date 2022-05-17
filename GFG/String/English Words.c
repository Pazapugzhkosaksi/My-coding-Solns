string englishWords(string S) {
       if(S[0]=='A' || S[0]=='E' || S[0]=='I'|| S[0]=='O'|| S[0]=='U')
          return S;
       else
       {
          string s1="",s2="";
          int i=0;
          while(S[i]!='A' && S[i]!='E' && S[i]!='I' && S[i]!='O' && S[i]!='U' )
          {
              s1+=S[i];
              i++;
          }
          while(S[i]!='\0')
          {
              s2+=S[i];
              i++;
              
          }
          return s2+s1+"AY";
       }
    }