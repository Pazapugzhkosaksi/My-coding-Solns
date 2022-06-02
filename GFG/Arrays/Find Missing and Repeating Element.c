// 330/340 cases passed
int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int* ar=new int[2];
        unsigned long long sum=0;
        int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1] && f==0)  
            {
                ar[0]=arr[i+1];
                arr[i]=0;
            }
            sum+=arr[i];
        }
        sum+=arr[n-1];
        unsigned long long total=((n*(n+1))/2);
        ar[1]=total-sum;
        return ar;
    }

//Solved using Peer approach
    
int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int* ar=new int[2];
        int rep,miss=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1] )  
            {
                rep=arr[i+1];
            }
            if(miss==arr[i])
                miss++;
        }
        ar[0]=rep;
        ar[1]=miss;
        return ar;
} 

// Peer Approach

int crrct_indx;
       int *ans = new int(2);
       int i=0;
       while(i<n){
           crrct_indx=arr[i]-1;
           if(arr[i]!=arr[crrct_indx]){
               //just swap the elements
               swap(arr[i],arr[crrct_indx]);
           }else{
               //means that they are at correct position
               //so do nothing 
               i++;
           }
       }
       //coming out from loop
      
       for(int i=0;i<n;i++){
           if(i+1!=arr[i]){
               ans[0]=arr[i];//repeating element 
               ans[1]=i+1;//missing element
           }
       }
       return ans;

       