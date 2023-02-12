// Successful Approach 
int distinct(vector<vector<int>> M, int N)
{
    int counter=0;
    map<int,int> m;
    for(int j=0;j<N;j++)
    {
        m[M[0][j]]=1;
    }
    for(int i=1;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(m[M[i][j]]==i)
                m[M[i][j]]=i+1;
        }
    }
    for(auto it:m){
        //cout<<it.first<<" "<<it.second<<endl;
        if(it.second==N)
            counter++;
    }
    return counter;
}