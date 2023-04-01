// Successful and Optimal Approach
class Solution {
  public:
  
   void generatePermutation(int ind ,vector<int> arr,int n,vector<vector<int>> &res){
       if(ind==n){
          res.push_back(arr);
          return ;
       }
       for(int i=ind;i<n;i++)
       {
           swap(arr[i],arr[ind]);
           generatePermutation(ind+1,arr,n,res);
           swap(arr[i],arr[ind]);
       }
   }
  
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        vector<vector<int>> res,ans;
        generatePermutation(0,arr,n,res);
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());   // this function removes duplicate entries from a vector
        return res;
    }