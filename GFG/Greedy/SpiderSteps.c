

// Bruteforce Approach 
int minStep(int H, int U, int D){
        int step=0,curr=0;
        while(1)
        {
            curr+=U;
            if(curr>H)
            {
                step+=1;
                break;
            }
            curr-=D;
           // cout<<curr<<" ";
            step+=1;
        }
        return step;
    }