// 281/358 cases passed
string utility(string s)
    {
        stack<char> st;
        int f=1;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            if(!st.empty() && st.top()==s[i])    
            {
                f=0;
                continue;
            }
            if(!st.empty() && st.top()!=s[i])
            {
                if(!f)
                {
                    st.pop();
                    st.push('!');
                    f=1;
                }
                st.push(s[i]);
            }
        }
        if(!f)
        {
            st.pop();
            st.push('!');
        }
        s="";
        while(!st.empty())
        {
             if(st.top()!='!')
             {
                s+=st.top();
             }
             st.pop();
        }
        reverse(s.begin(),s.end());
      //  cout<<s<<endl;
        return s;
    }
    
    string rremove(string s){
    
        string res="";
        while(true)
        {
            res=utility(s);
            if(res=="" || res==s)
                break;
            s=res;
        }
        return res;
        
    }