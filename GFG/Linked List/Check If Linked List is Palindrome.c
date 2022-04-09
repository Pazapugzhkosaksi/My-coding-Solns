   // Optimal Solution
 bool isPalindrome(Node *head)
    {
       int a=0;
       while(head!=NULL)
       {
           a=(a*10)+head->data;
           head=head->next;
       }
       int b=a,r=0;
       while(a>=1)
       {
           r=(r*10)+(a%10);
           a=a/10;
       }
       if(r==b)
          return true;
       else
          return false;
    }


    //  Different Approach

        boolean isPalindrome(Node head) 
        {
            int number1 = 0;
            int number2 = 0;
            int power = 1;
            //Your code here
            Node x = head;
            
            while(x!=null){
                number1 = (number1 * 10) + x.data;
                number2 = number2 + (x.data * power);
                power = power * 10;
                x = x.next;
            }
            
            return number1 == number2;
        }    
