// Tortoise and Hare Algorithm

int countNodesinLoop(struct Node *head)
{
    Node* slow=head,*fast=head;
    int f=0;
    while( fast!=NULL && fast->next!=NULL )
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
             int c=1;
             slow=slow->next;
             while(slow!=fast)
             {
                
                slow=slow->next;
                c++;
             }
             return c; 
        }    
    }
        return 0;
}

// Variation of the approach

	//Function to find the length of a loop in the linked list.
	int countNodesinLoop(Node* head)
	{
	    //using two pointers and moving one pointer(slow) by one node and 
	    //another pointer(fast) by two nodes in each iteration.
	    Node* fast = head->next;
	    Node* slow = head;
	    
	    while( fast!=slow )
	    {
	        //if the node pointed by first pointer(fast) or the node 
	        //next to it is null, then loop is not present so we return 0.
	        if( fast==NULL || fast->next==NULL ) 
	        return 0;
	        
	        fast = fast->next->next;
	        slow = slow->next;
	    }
	    //both pointers now point to the same node in the loop.
	    
	    int size = 1;
	    fast = fast->next;
	    
	    //we start iterating the loop with first pointer and continue till 
	    //both pointers point to same node again.
	    while( fast!=slow )
	    {
	        fast = fast->next;
	        //incrementing the counter.
	        size++;
	    }
	    //returning the length of the loop.
	    return size;
	}