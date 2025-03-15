class Solution {
  public:
  int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) { 
        count++;
        temp = temp->next;
    }
    return count;
}
    Node* intersectPoint(Node* head1, Node* head2) {
        int count1 = countNodes(head1);
        int count2 = countNodes(head2);
        
        while(count1>count2){
            count1--;
            head1=head1->next;
        }
        while(count2>count1){
            count2--;
            head2=head2->next;
        }
        
        while(head1!=head2){
            head1=head1->next;
            head2=head2->next;
        }
        
        return head1;
        
    }
};
