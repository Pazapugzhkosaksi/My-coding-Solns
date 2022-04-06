// Successful Approach
 	   long long sum=0;
	   int rs=x1-1,re=x2-1,cs=y1-1,ce=y2-1;
	   for(int i=rs;i<=re;i+=1)
	   {
	       for(int j=cs;j<=ce;j++)
	       {
	            //cout<<arr[i][j]<<" ";
	            sum+=arr[i][j];
	       }
	       //cout<<endl;
	   }
	   return sum;
	