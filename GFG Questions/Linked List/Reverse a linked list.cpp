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

// second method of reverse using loops
void print(Node *prev){
    while(prev!=NULL){
        cout<<prev->data<<" ";
        prev=prev->next;
    }
}
    Node* reverseList(struct Node* head) {
        // reverse(head);
        Node *prev= NULL;
        Node *temp;
        while(head!=NULL){
            temp = head->next;
            head->next= prev;
            prev=head;
            head=temp;
        }
        print(prev);
    }
};
