
        // My soln

int findSum(string str)
    {
    	int n=str.length(),c=0;
    	int arr[n+1];
    	int num=0, a=0;
    	for (int i=0;i<n;i++)
    	{
    	    
    	    char s=str.at(i);
    	     //cout<<s<<endl;
    	    if(s>='0' && s<='9')
    	    {
    	        a=s-'0';
    	       // cout<<a<<endl;
    	        num=num*10+a;
    	    }
    	    else
    	    {
    	        arr[c]=num;
    	        c+=1;
    	        num=0;
    	    }
    	    if(i==n-1)
    	    {
    	        arr[c]=num;
    	        c+=1;
    	    }
    	  // cout<<num<<endl;
    	}
    int sum=0;
    for(int i=0;i<c;i++)
    {
        sum=sum+arr[i];
    }
    	return sum;  
    }



    // Alternative Soln

    #include <cmath> 
class Solution
{
   public:
   //Function to calculate sum of all numbers present in a string.
   int findSum(string str){
       int sum = 0;
       int multiplier = 0;
       int len = str.length();
       for(int i = len-1; i >= 0; i--){
           if(isdigit(str[i]) == true){
               int x = str[i] - '0';
               sum = sum + (x*pow(10,multiplier));
               multiplier++;
           }
           else multiplier = 0;
       }
       return sum;
   }
}
   

//Alternative soln'


{
       int sum = 0;
       String s = "0";
       
       for(int i = 0; i < str.length(); i++) {
           char ch = str.charAt(i);
           if(ch >= '0' && ch <= '9')
               s += ch;
           else {
               sum += Integer.parseInt(s);
               s = "0";
           } 
               
       }
       
       sum += Integer.parseInt(s);
       
       return sum;
   }