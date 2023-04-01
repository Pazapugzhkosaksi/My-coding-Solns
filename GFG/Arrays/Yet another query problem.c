// 677/1115 queries passed
vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<N;i++)
        {
            mp[A[i]]+=1;
        }
        stack<int> s;
        for(int i=0;i<Q.size();i++)
        {
            int c=0;
            int L=Q[i][0];
            int R=Q[i][1];
            int k=Q[i][2];
            for(int a=0;a<L;a++)
            {
                mp[A[a]]-=1;
                s.push(A[a]);
            }
            for(int j=L;j<=R;j++)
            {
                if(mp[A[j]]==k)
                    c+=1;
                mp[A[j]]-=1;
                s.push(A[j]);
            }
            ans.push_back(c);
            while(!s.empty())
            {
                mp[s.top()]+=1;
                s.pop();
            }
        }
        return ans;
    }