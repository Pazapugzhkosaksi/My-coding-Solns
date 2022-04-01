// Two Different Approaches
		
	// GFG Approach
	long long c=0;
    long long toh(int N, int from, int to, int aux) {
		 if(N==1)
        {
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            c+=1;
            return c;
        }
        toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        c+=1;
        toh(N-1,aux,to,from);
    }

    // Abdul Bari Approach
    long long c=0;
    long long toh(int N, int from, int to, int aux) {
        if(N>0)
        {
            toh(N-1,from,aux,to);
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            c+=1;
            toh(N-1,aux,to,from);
        }
        return c;
    }