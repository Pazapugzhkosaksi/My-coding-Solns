// Successful and optimal approach
vector<int> minPartition(int N)
{
    vector<int> ans;
    int sum=N;
    int curr[]={2000,500,200,100,50,20,10,5,2,1};
    int ind=0;
    while(curr[ind]>sum){
        ind++;
    }

    while(sum>0)
    {
        sum-=curr[ind];
        ans.push_back(curr[ind]);
        while(curr[ind]>sum)
        {
            ind++;
        }
    }
    return ans;
}