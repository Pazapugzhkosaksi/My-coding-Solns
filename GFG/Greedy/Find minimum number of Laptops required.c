// Successful Approach based on Peer's approach 
// Based on Minimum Platforms
int minLaptops(int N, int start[], int end[]) {
       sort(start,start+N);
       sort(end,end+N);
       
       int laptops =1,min=1;
       int i=1,j=0;
       while(i<N && j<N){
           if(end[j]-start[i]>0) // or (start[i]<end[j])
           {
               laptops++;
           }
           else{
               j++;
           }
           i++;
       }
       return laptops;
    }