/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
  void reverse(Node *head){
      if(head==NULL) return;
      
      reverse(head->next);
      cout<<head->data<<" ";
  }
    Node* reverseList(struct Node* head) {
        reverse(head);
    }
};
