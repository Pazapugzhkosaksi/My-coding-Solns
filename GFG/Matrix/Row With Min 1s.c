//Successfull BruteForce Approach
		int minRow(int N, int M, vector<vector<int>> A) {
		       int min=65535,nos,ind;
		       for(int i=0;i<N;i++)
		       {
		           nos=0;
		           for(int j=0;j<M;j++)
		           {
		               if(A[i][j]==1)
		                 nos+=1;
		           }
		           if(nos<min)
		           {
		              min=nos; 
		              ind=i+1;
		           }
		       }
		       return ind;
		    }