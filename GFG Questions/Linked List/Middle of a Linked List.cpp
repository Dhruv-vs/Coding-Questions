class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
      //using floyd's slow fast algo
        Node* slow = head;
        Node* fast = head;
        while(fast && fast->next){
            slow = slow->next; // moving 1 step
            fast = fast->next->next; // moving 2 step
        }
        return slow->data;
    }
};
