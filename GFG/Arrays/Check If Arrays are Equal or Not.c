
// Successfull Approach but takes O(NlogN) time
bool check(vector<ll> A, vector<ll> B, int N) {
       sort(A.begin(),A.end());
       sort(B.begin(),B.end());
       for(int i=0;i<N;i++)
       {
           if(A.at(i)!= B.at(i))
              return false;
       }
       return true;
    }
    // O(n) can be achieved only by hashing