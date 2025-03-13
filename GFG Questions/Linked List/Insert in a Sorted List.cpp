class Solution {
  public:
    
    Node* sortedInsert(Node* head, int key) {
        Node *temp = head;
        Node *new_node = new Node(key);
        // if head is null
        if(head==NULL){
            return new_node;
        }
        // insert at begining
       if(head->data>=key){
           new_node->next=head;
           head = new_node;
       }
       else{
           // insert at middle or end
           while(temp->next && temp->next->data<key){
               temp=temp->next;
           }
           new_node->next = temp->next;
           temp->next = new_node;
       }
       return head;
    }
};
