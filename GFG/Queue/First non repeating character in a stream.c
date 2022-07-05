// My successful soln but uses extra space
string FirstNonRepeating(string A){
		    queue<char> q,tq;
		    int arr[26];
		    memset(arr,0,26*sizeof(int));
		    string s;
		    for(int i=0;i<A.length();i++)
		    {
		        if(q.empty() && arr[A[i]-'a']==0)
		        {
		            s+=A[i];
		            q.push(A[i]);
		        }
		        else if(q.empty() && arr[A[i]-'a']==1)
		        {
		            s+='#';
		        }
		        else if(!q.empty() && arr[A[i]-'a']==1)
		        {
		            while(!q.empty())
		            {
		                int a=q.front();
		                if(A[i]!=a)
		                    tq.push(a);
		                q.pop();
		            }
		            while(!tq.empty())
		            {
		                int a=tq.front();
		                q.push(a);
		                tq.pop();
		            }
		            if(!q.empty())
		            {
		                s+=q.front();
		            }
		            else
		                s+='#';
		        }
		        else if(!q.empty() && arr[A[i]-'a']==0)
		        {
		            s+=q.front();
		            q.push(A[i]);
		        }
		        arr[A[i]-'a']=1;
		        
		    }
		    return s;
		}