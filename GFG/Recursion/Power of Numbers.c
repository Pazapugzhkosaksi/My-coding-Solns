long long power(int N,int R)
    {
       if (R == 0)    // if(R==1)
			return 1; //   return N;

		long temp = power(N, R / 2);
		long evenPower = (temp * temp) % 1000000007;

		if (R % 2 == 0)
			return evenPower;

		return (N * evenPower) % 1000000007;
        
    }     



/*
      21 { [(12*12)*(12*12) *12] [(12*12)*(12*12) *12] * [(12*12)*(12*12) *12] [(12*12)*(12*12) *12] } * 12
      10 [(12*12)*(12*12) *12] [(12*12)*(12*12) *12]   
      5  (12*12)*(12*12) * 12
      2   12 *12 
      1   12
      0   1
 */
