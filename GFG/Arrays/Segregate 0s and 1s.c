                                                          Segregate 0s and 1s

// My soln
void segregate0and1(int arr[], int n) {
       int s=0,e=n-1;
       while(s!=e)
       {
           if(arr[s]==0)
           {
             s+=1;
             //continue;
           }
           else if(arr[e]==1)
           {
             e-=1;
             //continue;
           }
           else //if(arr[s]==1 && arr[e]==0)
           {
               int t=arr[s];
               arr[s]=arr[e];
               arr[e]=t;
           }
       }
       
    }

// Alternative Soln
 

class Solution{   
public:
   void segregate0and1(int arr[], int n) {
       int c=0;      // Step 1:  Count the no. of one's and make that element zero so after the first traversal all the elements will become zero.
       for(int i=0 ; i<n ; i++){
           if(arr[i]==1){c++;arr[i]=0;}
       }             // Step 2:  Start from the index(n-c) till end and make all the elements one.
       for(int i=n-c ; i<n ; i++)arr[i]=1;
   }
};

 


