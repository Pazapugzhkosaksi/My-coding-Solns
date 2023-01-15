// Successful Approach but not optimal in terms of space

int countRev (string S)
{
    stack<char>s;
    for(int i=0;i<S.length();i++)
    {
        if(s.empty())
        {
            s.push(S[i]);
        }
        else{
        if(S[i]=='}' && s.top()=='{')
        {
            s.pop();
            continue;
        }
         s.push(S[i]);
        }
        
    }

    int c=0;
    if(s.empty())
        return c;
        
    vector<char> a;
    while(!s.empty())
    {
        a.push_back(s.top());
        s.pop();
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        if(s.empty())
        {
            if(a[i]=='}')
            {
                c+=1;
                s.push('{');
                //continue;
            }
            else
                s.push(a[i]);
        }
        else{
            if(s.top()=='{' && a[i]=='}')
            {
                s.pop();
                continue;
            }   
            else if(s.top()=='{' && a[i]=='{')
            {
                    c+=1;
                    s.pop();
            }
        }
    }

    if(s.empty())
        return c;
    else
        return -1;
          
}