// Successful approach
// Had only 26 testcases
void clonestack(stack<int> st, stack<int>& cloned)
{
        if(!st.empty())
        {
            int t=st.top();
            st.pop();
            clonestack(st,cloned);
            cloned.push(t);
        }
        return ;
}