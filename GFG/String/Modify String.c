 //Succesful Approach
    string modify (string s)
    {
        if(s[0]>=97 && s[0]<=122)
        {
            for(int i=1;i<s.length();i++)
            {
                if(s[i]>=65 && s[i]<=90)
                    s[i]+=32;
            }
        }
        else
        {
            for(int i=1;i<s.length();i++)
            {
                if(s[i]>=97 && s[i]<=122)
                    s[i]-=32;
            }
        }
        return s;
    }


// Approach Using Functions

    string modify (string s)
    {
        if(s[0]>=97 && s[0]<=122)
        {
            transform(s.begin(),s.end(),s.begin(),::tolower);
        }
        else
        {
            transform(s.begin(),s.end(),s.begin(),::toupper);
        }
        return s;
    }