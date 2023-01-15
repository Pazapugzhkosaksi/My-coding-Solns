// Successful Approach 
int minimumStep(int n){
        int c=0;
        while(n>0)
        {
            if(n%3==0)
            {
                n=n/3;
                c+=1;
            }
            else{
                n=n-1;
                c+=1;
            }
        }
        return c-1;
}

// Tweaked Approach based on comments

int minimumStep(int n){
        int c=0;
        while(n>1)
        {
            n%3==0? n=n/3:n=n-1;
            c+=1;
        }
        return c;
}