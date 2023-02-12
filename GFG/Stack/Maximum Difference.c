int findMaxDiff(int arr[], int n)
{
  stack<int> s1;
  vector<int> ls,rs;
        
  // calculating ls array
  ls.push_back(0);
  s1.push(arr[0]);
  for(int i=1;i<n;i++)
  {
      if(s1.top()<arr[i])
      {
         ls.push_back(s1.top());
      }
      else{
          while(!s1.empty() && s1.top()>=arr[i])
            s1.pop();
          if(!s1.empty())
           ls.push_back(s1.top());
          else
           ls.push_back(0);
      }
      s1.push(arr[i]);
  }
          
  // calculating rs array
  stack<int> s2;
  rs.push_back(0);
  s2.push(arr[n-1]);
  for(int i=n-2;i>=0;i--)
  {
    if(s2.top()<arr[i])
      rs.push_back(s2.top());
    else{
      while(!s2.empty() && s2.top()>=arr[i])
          s2.pop();
      if(!s2.empty())
          rs.push_back(s2.top());
      else
          rs.push_back(0);
    }
    s2.push(arr[i]);
  }
  reverse(rs.begin(),rs.end());
          
  int max_diff=abs(ls[0]-rs[0]);
  for(int i=1;i<n;i++)
      if(abs(ls[i]-rs[i])>max_diff)
          max_diff=abs(ls[i]-rs[i]);
          
  return max_diff;
}