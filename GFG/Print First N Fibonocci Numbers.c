

// Print First N fibonocci Numbers
   // BruteForce Approach

   		vector<long long> printFibb(int n) 
    {
        vector <long long> l;
        l.push_back(1);
        if(n==1)
            return l;
        l.push_back(1);
        if(n==2)
            return l;
        for(int i=3;i<=n;i++)
            l.push_back(l[i-2]+l[i-3]);
        return l;
            
    }


    // Check For DP Approach