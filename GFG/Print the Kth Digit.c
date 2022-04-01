

// My approach
int kthDigit(int A,int B,int K){
         long long int a=pow(A,B);
        string s=to_string(a);
        long long int n=s.length()-K;
        long long int b = s[n]-'0';
        return b;
    }

// Other Approaches

// #1 
int kthDigit(int A,int B,int K)
   {
       int i=0;
       long int res = 1;
       
       for (i=1; i<=B; i++)
       {
           res = res*A;
       }
       i = 1;
       while (res>0)
       {
           if (K == i)
           {
               return (res%10);
           }
           i++;
           res = res/10;
       }
   }

// #2

int kthDigit(int A,int B,int K){
        // code here
        int n=0;
        int rem=0;
        long ans=pow(A,B);
        while(ans>0){
           n++;
           rem=ans%10;
           if(K==n){
               return rem;
           }
           ans/=10;
        }
    }