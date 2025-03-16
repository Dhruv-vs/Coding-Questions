class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        Node* temp = head;
        // if first node to delete
        if(x==1){
            head = head->next;
            head->prev = NULL;
            return head;
        }
        // if last node to delete
        Node* temp1 = head;
        int count =0;
        while(temp1){
            count++;
            temp1= temp1->next;
        }
        if(count == x){
            while(temp->next->next){
                temp= temp->next;
            }
            temp->next = NULL;
            return head;
        }
        // if middle is to delete
        while(x>1){
            x--;
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        return head;
    }
};
