 
// Succesful testcase that is optimal interms of time and space   
// specified complexities 
        //Time : O(N)     Space: O(N)
 bool isRotated(string str1, string str2)
    {
        bool lr=0,rr=0;
        if(str1[0]==str2[str2.length()-2] && str1[1]==str2[str2.length()-1])
        {
            int i;
            for( i=2;i<str1.length();i++)
            {
                if(str1[i]!=str2[i-2])
                {
                    //cout<<str1[i]<<":"<<str2[i-2];
                    lr=0;
                    break;
                }
                if(i==str1.length()-1)
                    lr=1;
            }
            
        }
        if(str1[str1.length()-2]==str2[0] && str1[str1.length()-1]==str2[1])
        {
            int i;
            for( i=0;i<str1.length()-2;i++)
            {
                if(str1[i]!=str2[i+2])
                {
                    rr=0;
                    break;
                }
            }
            if(i==str1.length()-2)
                rr=1;
        }
        return lr | rr;
    }