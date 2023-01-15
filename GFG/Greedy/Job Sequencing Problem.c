class Solution 
{ 
   // based on profit
   static bool compare(Job job1,Job job2){
        if(job1.profit>job2.profit)
            return true;
        return false;
   }
   public:
   //Function to find the maximum profit and the number of jobs done.
   vector<int> JobScheduling(Job arr[], int n) 
   { 
        vector<int> ans;
        sort(arr,arr+n,compare);
        int maxi=arr[0].dead;
        
        // need to find maximum of deadline because we need to 
        // set array of slot based on maximum deadline
        for(int i=1;i<n;i++)
        {
            if(arr[i].dead>maxi)
                maxi=arr[i].dead;
        }

        int slot[maxi+1]; // +1 because of one based indexing
        memset(slot,-1,(maxi+1)*sizeof(int));
              
        int c=0,max_profit=0;
        for(int i=0;i<n;i++)
        {
                for(int j=arr[i].dead;j>0;j--) // j>0 since id follows one based indexing
                {
                    if(slot[j]==-1)
                    {
                       slot[j]=arr[i].id;
                       max_profit+=arr[i].profit;
                       c+=1; 
                       break;
                    }
                }
                
        }
        ans.push_back(c);
        ans.push_back(max_profit);
        return ans;
   } 
};