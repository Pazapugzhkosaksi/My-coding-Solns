// Successful Approach but not space complex
int celebrity(vector<vector<int> >& M, int n) 
    {
        int ind=-1;
        stack<int> s; // detecting for candidate celebrities
        for(int i=0;i<n;i++)
        {
            bool t=true;
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==1)
                {
                    t=false;
                    break;
                }
            }
            if(t==true)
            {
                s.push(i);
            }
        }
        
        if(s.empty())   // if no such celebrity exists
            return -1;
        // validating if the celebrity is not known by anyone
        int elem=s.top();
        s.pop();
        if(!s.empty()) return -1;
        for(int i=0;i<n;i++)
        {
            if(i!=elem && M[i][elem]==0) // if someone knows the celebrity
                return -1;
        }
        return elem;
        
        
    }

// Successful and optimal Approach 
// T.C O(N*N)  S.C O(1) 
// Check for a O(N) implementation
int celebrity(vector<vector<int> >& M, int n) 
    {
        int elem=-1;
        for(int i=0;i<n;i++)
        {
            bool f1=true;
            // finding a potential celebrity by searching for 
            // a person who doesn't know anyone in the party
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==1)
                    f1=false;
            }
            if(f1==true)
            {
                // if there are two persons who dont know anyone
                //in the party
                if(elem==-1)
                    elem=i;
                else
                    return -1;
            }
        }
        // if no such celebrity exists
        if(elem==-1)
            return elem;
        // checking if the potential celebrity is known by everyone in the party
        for(int i=0;i<n;i++)
        {
            if(i!=elem && M[i][elem]==0 )
                return -1;
        }
        return elem;
}


// T.C O(N) and S.C O(N) approach using stack
bool knows(vector<vector<int>> &M,int a,int b){
        return M[a][b];
}
int celebrity(vector<vector<int> >& M, int n) 
{
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        // We are downsizing the Celebrity candidates to 1
        while(s.size()>1){
            int A=s.top();
            s.pop();
            int B=s.top();
            s.pop();
            // If A knows B it implies that A can't be a celebrity so
            // we have eliminated A and pushed back B into the stack
            if(knows(M,A,B)){
                s.push(B);
            }
            // If A doesnt know B then he is a potential candidate and
            // since only one celebrity exists, B can't be the celebrity
            else{
                s.push(A);
            }
        }
        // the stack will be reduced to 1 celebrity
        int C=s.top();
        for(int i=0;i<n;i++)
        {
            // validating that the celebrity is not known by anyone and he doesnt know anyone in the party.
            if(i!=C && (knows(M,C,i) || !knows(M,i,C)))
                return -1;
        }
        return C;
}
