// Successful and Optimal Approach
int minOperation(int n)
{
    int count=0;
    if(n==1)
        return 1;
        
    while(n>2)
    {
        if(n%2==1)
        {
            count+=1;
            n-=1;
            continue;
        }
        count+=1;
        n=n/2;
    }
    count+=2;
    return count;
}