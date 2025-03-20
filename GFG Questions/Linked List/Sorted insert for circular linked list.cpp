class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        Node* newNode = new Node(data);
        if (!head) {
            newNode->next = newNode;
            return newNode;
        }
        Node* temp = head;
        
        if (head->data >= data) {
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            return newNode;
        }
        
        Node* temp1 = head;
        while (temp1->next != head && temp1->next->data < data) {
            temp1 = temp1->next;
        }
        
        newNode->next = temp1->next;
        temp1->next = newNode;
        
        return head;
    }
};
