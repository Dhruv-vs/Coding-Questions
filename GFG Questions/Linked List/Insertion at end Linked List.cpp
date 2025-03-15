class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        if(head==NULL){
            head = new Node(x);
            return head;
        };
        Node *temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = new Node(x);
        return head;
    }
};
