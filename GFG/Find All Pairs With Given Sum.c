// Successful Approach
vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
       int b,ind;   
       sort(B,B+M);
       vector<pair<int,int>> a;
       pair<int,int>p;
       for(int i=0;i<N;i++)
       {
           b=X-A[i];
           ind=bs(B,0,M-1,b);
          // cout<<b<<":"<<ind<<" ";
           if(ind!=-1)
           {
                p.first=A[i];
                p.second=B[ind];
                a.push_back(p);
           }
       }
       sort(a.begin(),a.end());
       return a;
    }