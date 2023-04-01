int NthTerm(int N){
		
	long long int n=N; // always a best practice to check if we are performing
	if(n==1)		   // mod on long long or double and not on int. Doesnt work well 
	    return 2;	   // when dealing with int datatype
		                           
	return (NthTerm(n-1)*n+1)%1000000007;  
}