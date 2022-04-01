
// My soln

string largestNumber(int n, int sum)
    {
        if (sum ==(n*9))
        {
            string a="";
            for (int i=0;i<n;i++)
            {
                a+='9';
            }
            return a; 
        }
        else if (sum< n*9)
        {
            int maxi=9,c=0;
            string a="";
            if(sum>=maxi)
            {
                int q=sum/maxi;
                for(int j=0;j<q;j++)
                {
                    a+=to_string(maxi);
                    sum-=maxi;
                }
                c+=q;
               // cout<<sum;
            }
            a+=to_string(sum);
            c+=1;
            for(int j=n-c;j>0;j--)
                a+='0';
            return a;
        }
        else
            return "-1";
    }

// similar alternate solution
    
    if(9*n<sum){
           return "-1";
       }
       
       string res="";
       for(int i=0;i<n;i++){
           if(sum>=9){
               res+=to_string(9);
               sum-=9;
           }
           else if(sum>0 && sum<9){
               res+=to_string(sum);
               sum-=sum;
           }
           
           else if(sum==0){
               res+=to_string(0);
           }
       }
       return res;