
class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        Node* clone = head;
        Node* temp;
        
        while(clone){
            Node* temp = new Node(clone->data);
            temp->next = clone->next;
            clone->next = temp;
            clone = temp->next;
        }
        
        clone = head;
        while(clone){
            if(clone->random)
            clone->next->random = clone->random->next;
            
            clone = clone->next->next;
        }
        
        Node* ans = head->next;
        clone = head;
        temp = head->next;
        while(temp){
            clone->next = temp->next;
            clone = temp;
            temp = temp->next;
        }
        return ans;
    }
};
