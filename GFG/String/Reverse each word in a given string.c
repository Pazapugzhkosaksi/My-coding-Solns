// Successful Approach but could optime space 
string reverseWords (string s)
{
        string n;
        stack<char>st;
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]!='.')
            {
                st.push(s[i]);
            }
            else
            {
                while(!st.empty())
                {
                    n+=st.top();
                    st.pop();
                }
                n+='.';
            }
            i+=1;
        }
        while(!st.empty())
        {
            n+=st.top();
            st.pop();
        }
     return n;
}