int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                    c+=1;
            }
        }
        return c;
    }

    // Different approach
    int numIdenticalPairs(vector<int>& nums) {
       int count=0;
       int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
             count+=mp[nums[i]];
             mp[nums[i]]++;
        }
        return count;
    }