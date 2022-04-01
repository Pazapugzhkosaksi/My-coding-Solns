
// Succesfully passed all test cases

 vector<string> invIsoTriangle(int N) {
        vector<string> a;
        
        int spaces=0;
        while(N>0)
        {
            string s="";
            for(int i=0;i<spaces;i++)
                s+=' ';
            for(int i=0;i<((2*N)-1);i++)
                s+='*';
            for(int i=0;i<spaces;i++)
                s+=' ';
            a.push_back(s);
            N-=1;
            spaces+=1;
        }
        return a;
    }