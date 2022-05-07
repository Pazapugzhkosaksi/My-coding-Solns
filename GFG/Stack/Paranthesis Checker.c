bool ispar(string x)
    {
        stack<char> stack;
        for(int i=0;i<x.length();i++)
        {
            if(stack.empty() && (x[i]==')' || x[i]=='}'|| x[i]==']' ))
                return false;
            if(x[i]=='(' || x[i]=='[' || x[i]=='{')
                stack.push(x[i]);
            if(x[i]==')' )
            {
                if(stack.top()=='(')
                {
                    stack.pop();
                }
                else
                    return false;
            }
            if(x[i]==']')
            {
                if(stack.top()=='[')
                {
                    stack.pop();
                }
                else
                    return false;
            }
            if(x[i]=='}')
            {
                if(stack.top()=='{')
                {
                    stack.pop();
                }
                else
                    return false;
            }
            
        }
        if(stack.empty())
            return true;
        else
            return false;
    }