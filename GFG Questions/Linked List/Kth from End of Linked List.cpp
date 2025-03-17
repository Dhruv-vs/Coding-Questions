class Solution {
  public:
  int countNodes(Node* head){
      int count=0;
      while(head){
          count++;
          head=head->next;
      }
      return count;
  }
    int getKthFromLast(Node *head, int k) {
        Node* c = head;
        int count = countNodes(c);
        if(k>count) return -1;
        
        // first method is reversing the list and then finding
        // Node* prev = NULL;
        // Node* temp;
        // while(head!=NULL){
        //     temp = head->next;
        //     head->next= prev;
        //     prev=head;
        //     head=temp;
        // }
        // if(k==1) return prev->data;
        // while(k>1){
        //     prev = prev->next;
        //     k--;
        // }
        // return prev->data;
        
        // second method 
        int moves = count-k;
        while(moves){
            head = head->next;
            moves--;
        }
        return head->data;
    }
};
