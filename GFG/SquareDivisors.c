

// My approach (5/212)
long long int squareFactor(long long N){
       long long int c=1;
        for(long long int i=2;i<=N;i++)
        {
          
          if(N%i==0 && (sqrt(i)==(int)sqrt(i))) 
                c+=1;
        }
        return c;
    }


// My successful solution

     long long int squareFactor(long long N){
       long long int c=1;
        for(long long int i=2;i*i<=N;i++)
        {
          
          if(N%(i*i)==0 && (sqrt(i*i)==(int)sqrt(i*i)))
                c+=1;
        }
        return c;
    }

// Improvised soln of mine after going through comments

      long long int squareFactor(long long N){
       long long int c=1;
        for(long long int i=2;i*i<=N;i++)
        {
          
          if(N%(i*i)==0)  // removed the second if condition.
                c+=1;
        }
        return c;
    }

// Another relevant soln

    int squareFactor(long long N){
        
        int c=0;
       for(int i=1;i<=sqrt(N);i++){    // He has just inverted the condition in for loop.
           if(N%(i*i)==0){
               c++;
           }
       }
        return c;
    }