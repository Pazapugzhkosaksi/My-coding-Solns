// My solution


string findMax(string N) {
       sort(N.begin(),N.end());
       reverse(N.begin(),N.end());
       return N;


// Alternative Approach

       	sort(N.begin(), N.end(), greater<int>());