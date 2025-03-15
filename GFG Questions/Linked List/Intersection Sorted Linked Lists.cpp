class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node* list = new Node(0);
        Node* tail = list; // tail is req because i cant move list forward 
        while(head1 && head2){
            if(head1->data==head2->data){
                tail->next = new Node(head1->data); // tail is used here to add so that list point first node
                tail = tail->next;
                head1=head1->next;
                head2=head2->next;
            }
            else if(head1->data<=head2->data) head1=head1->next;
            else head2=head2->next;
        }
        return list->next; // print list->next because first node is 0 and we dont want it 
    }
};
