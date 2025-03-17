class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {
        Node* temp = head;
        while(temp->next){
            if(temp->data!=temp->next->data) temp=temp->next;
            else temp->next = temp->next->next;
        }
        return head;
    }
};
