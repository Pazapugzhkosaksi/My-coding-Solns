// Successful Approach but not optimized in terms of time
int minValue(string s, int k){
        int counts[26];
        memset(counts,0,26*sizeof(int));
        for(int i=0;i<s.length();i++)
        {
            counts[s[i]-'a']++;
        }
        for(int i=0;i<k;i++)
        {
            sort(counts,counts+26,greater<int>());
            counts[0]-=1;
        }
        int sum=0,t=0;
        for(int i=0;i<26;i++)
        {
            t=counts[i]*counts[i];
            sum+=t;
        }
        return sum;
    }