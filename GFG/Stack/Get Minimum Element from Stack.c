// Successful Soln but not optimized as per criteria
class Solution{
    int minEle;
    stack<int> s;
    stack<int> ts;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(s.empty())
               return -1;
           return minEle;
       }
       
       /*returns poped element from stack*/
       int pop(){
           
         if(s.empty())
         {
             return -1;
         }
         else
         {
           int x=s.top();
           s.pop();
           if(x==minEle)
           {
               while(!s.empty())
               {
                   int a=s.top();
                   s.pop();
                   ts.push(a);
               }
               minEle=9999999;
               while(!ts.empty())
               {
                   int a=ts.top();
                   if(a<minEle)
                      minEle=a;
                   ts.pop();
                   s.push(a);
               }
           }
           return x;
        }
       }
       /*push element x into the stack*/
       void push(int x){
           if(s.empty())
           {
               minEle=x;
           }
           else if(x<minEle)
                 minEle=x;
           s.push(x);
           
       }