class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        Node* odd = head;
        Node* even = head->next;
        Node* temp = head->next;
        while(even && even->next){
            odd->next = even->next;
            odd = odd->next;
            
            even->next = odd->next;
            even = even->next;
        }
        odd->next = temp;
    }
};
