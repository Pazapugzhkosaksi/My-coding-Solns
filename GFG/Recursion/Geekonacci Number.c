

// My successful approach
int findGeekonacci(int a,int b,int c,int n)
{
    if(n==1)
        return a;
    if(n==2)
        return b;
    if(n==3)
        return c;
    else
    {
        return findGeekonacci(a,b,c,n-1)+findGeekonacci(a,b,c,n-2)+findGeekonacci(a,b,c,n-3);
       
    }
}