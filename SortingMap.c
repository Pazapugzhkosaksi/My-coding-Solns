static bool cmp(pair<string, int>& a, pair<string, int>& b)
    {
        return a.second > b.second;
    }
    
    string sortMap(map<string,int> &m){
        vector<pair<string, int> > A;
  
        for (auto it : m) {
            A.push_back(it);
        }
        sort(A.begin(), A.end(), cmp);
        //return A[1].first;
        // Copy back to map from vector of pairs
    }