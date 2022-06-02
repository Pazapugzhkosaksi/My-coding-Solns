// Successful approach as per criteria 
 T.C : O(N)
 S.C : O(N)
void deleteMid(stack<int>&s, int sizeOfStack)
{
        stack<int>ts;
        int mid=(sizeOfStack+1)/2;
        while(s.size()!=mid)
        {
            ts.push(s.top());
            s.pop();
        }
        s.pop();
        while(!ts.empty())
        {
            s.push(ts.top());
            ts.pop();
        }
        return;
}