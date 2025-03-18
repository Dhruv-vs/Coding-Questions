class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        if (!head1) return head2;
        if (!head2) return head1;
        
        Node* head3 = new Node(0);
        Node* ans = head3;
        while(head1 && head2){
            if(head1->data>=head2->data){
                ans->next = new Node(head2->data);
                ans = ans->next;
                head2= head2->next;
            }
            else{
                ans->next = new Node(head1->data);
                ans = ans->next;
                head1= head1->next;
            }
        }
        while(head1){
            ans->next = new Node(head1->data);
            ans = ans->next;
            head1=head1->next;
        }
        while(head2){
            ans->next = new Node(head2->data);
            ans = ans->next;
            head2=head2->next;
        }
        return head3->next;
    }
};
