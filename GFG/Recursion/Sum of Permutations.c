// Successful approach based on Striver's permutation using recursion
void recPermute(int A[],int n,vector<long long> &ans,int ind){
    
    if(ind ==n)
    {
        long long sum=0;
        for(int i=0;i<n;i++){
            sum=((sum*10)%1000000007)+A[i];
        }
        ans.push_back(sum);
        return;
    }
    
    for(int i=ind;i<n;i++)
    {
        swap(A[i],A[ind]);
        recPermute(A,n,ans,ind+1);
        swap(A[i],A[ind]);
    }
}

/*You are required to complete this method */
long long getSum(int A[],int n)
{
    vector<long long> ans;
    recPermute(A,n,ans,0);
    long long s=0;
    for(int i=0;i<ans.size();i++)
    {
        s+=ans[i];
        s=s%1000000007;
    }
    return s;
}


// A more efficient approach

long long getSum(int A[],int n)
{
    long long ans=1,sum=0;    // 111 ,6 
    for(int i=0;i<n-1;i++){
        ans*=10;
        ans++;
        sum+=A[i];
    }
    sum+=A[n-1];
    ans*=sum;          //666
    ans%=1000000007;
    for(int i=1;i<n;i++){  
        ans*=i;            
        ans%=1000000007;
    }
    return ans;
}