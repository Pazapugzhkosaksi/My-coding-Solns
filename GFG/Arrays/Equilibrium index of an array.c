

// My bruteforce approach (33/100)
int findEquilibrium(int a[], int n)
{
   int ls,rs;
   for(int i=0;i<n-1;i++)
   {
       ls=0,rs=0;
       for(int j=0;j<i;j++)
       {
            ls+=a[j];
       }
       for(int j=i+1;j<n;j++)
       {
           rs+=a[j];
       }
       if(ls==rs)
         return i;
   }
   return -1;
}

// My successful submission 
int findEquilibrium(int a[], int n)
{
   int s=0;    
   for(int i=0;i<n;i++)
        s+=a[i];
    
   int ls=a[0],rs=s-a[0];
   for(int i=1;i<n-1;i++)
   {
       ls+=a[i];  */ 
       if(ls==rs)        // will work if the */ lines are interchanged as well
         return i;
       rs-=a[i]; */
       
   }    
   return -1;
}

// Tweaked version of my second submission

/* You are required to complete this method*/
int findEquilibrium(int a[], int n)
{
   int s=0;    
   for(int i=0;i<n;i++)
        s+=a[i];
    
   int ls=0,rs=s;                   //changed line
   for(int i=0;i<n;i++)            // changed line
   {
       ls+=a[i];
       if(ls==rs)
         return i;
       rs-=a[i];
       
   }    
   return -1;
}


// Revised Successful Attempt

	int equilibriumPoint(long long a[], int n) {
        int ls=a[0],rs=0;
        for(int i=0;i<n;i++)
            rs+=a[i];
        if(n==1)
            return 1;
        rs-=a[0];
        for(int i=1;i<n-1;i++)
        {
            rs-=a[i];
            if(ls==rs)
                return i+1;
            ls+=a[i];
        }
    
        return -1;
    }