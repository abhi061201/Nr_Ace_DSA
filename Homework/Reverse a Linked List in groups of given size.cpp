class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head==NULL || head->next==NULL)return head;
        struct node *p= NULL;
        struct node * cur= head;
        struct node * curnext= head->next;
        struct node * temp= head;
        int t=k;
        while( t-->1 &&cur->next!=NULL){
            
            cur->next=p;
            p= cur;
            cur= curnext;
            curnext= curnext->next;
            
        }
       cur->next=p;
        
        head->next= reverse(curnext,k);
        
        
        return cur;
    }
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends
