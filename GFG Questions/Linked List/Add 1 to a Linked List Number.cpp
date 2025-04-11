class Solution {
  public:
    Node* reverse(Node* head){
      Node* prev = NULL;
      Node* temp;
      while(head){
          temp = head->next;
          head->next = prev;
          prev = head;
          head = temp;
      }
      return prev;
  }
    Node* addOne(Node* head) {
       Node* h1 = reverse(head);
       int carry =0;
       Node* dummy = new Node(-1);
       Node* current = dummy;
       int sum = h1->data + 1;
       current->next = new Node(sum%10);
       current = current->next;
       carry = sum/10;
       h1 = h1->next;
       while(h1 || carry){
           int sum = carry;
           if(h1){
               sum = h1->data + carry;
               h1 = h1->next;
           }
           current->next = new Node(sum%10);
           carry = sum/10;
           current = current->next;
       }
       Node* result = reverse(dummy->next);
       
       while (result->data == 0 && result->next != NULL) {
        Node* temp = result;
        result = result->next;
        delete temp;
        }
        return result;
    }
};
