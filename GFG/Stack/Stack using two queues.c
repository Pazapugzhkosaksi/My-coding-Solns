// Successful Approach based on initial approach with queue using two stacks
void QueueStack :: push(int x)
{
    // if(q1.empty() && q2.empty())
    //     q1.push(x);
    if(q1.empty() && !q2.empty())
        q2.push(x);
    else
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    int x=-1;
    if(q1.empty()&& q2.empty())
        return x;
    else if(q2.empty())
    {
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
         x=q1.front();
         q1.pop();
    }
    else{
        while(q2.size()!=1){
            q1.push(q2.front());
            q2.pop();
        }
        x=q2.front();
        q2.pop();
    }
    return x;
}

//Peer Approach
void QueueStack :: push(int x)
{
        // Your Code
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code 
        if(q1.empty())
        return -1;
        int ans = q1.front();
        q1.pop();
        return ans;
}