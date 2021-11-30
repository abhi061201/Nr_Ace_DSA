
class Solution{
  public:
     Node * middle(Node *head){
          if(head==NULL || head->next==NULL)return head;
         Node * slow=head;
         Node * fast=head->next;
         while(slow!=NULL && fast!=NULL && fast->next!=NULL){
             slow= slow->next;
             fast= fast->next->next;
             
         }
       
         return slow;
     }
     Node * merge(Node * first, Node *sec){
          if(first==NULL )return sec;
          if(sec==NULL )return first;
         Node * temp=new Node (-1);
         Node *tail= temp;
     
         while(first!= NULL && sec!=NULL ){
             if(first->data<=sec->data){
                 tail->next= first;
                 
                 first=first->next;
             }
            else {
                 tail->next= sec;
                 
                 sec=sec->next;
             }
            
            
             tail= tail->next;
             
             
         }
         if(first!=NULL){tail->next= first;}
         if(sec!=NULL)tail->next= sec;
         tail= tail->next;
         return temp->next;
         
     }
     
    Node* mergeSort(Node* head) {
        
        if(head==NULL || head->next==NULL)return head;
        Node * mid= middle(head);
        Node * head2= mid->next;
        mid->next= NULL;
        Node * first= mergeSort(head);
        Node * sec= mergeSort(head2);
        return merge(first,sec);
        
    
    //   return merge(mergeSort(head2), mergeSort(mid));
    }
};
