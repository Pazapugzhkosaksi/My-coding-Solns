void printTriangleDownwards(string str)
    {
        
        string s,d;
        int n;
        for(int i=0;i<str.length();i++)
        {
            s+=str[i];
            n=str.length()-s.length();
            for(int j=0;j<n;j++)
                d+='.';
            cout<<d<<s<<endl;
            d="";
        }
    }