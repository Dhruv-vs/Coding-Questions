// first method
class Solution {
  public:
    bool isCircular(Node *head) {
        if (head == NULL) return false;

        Node *temp = head;
        while (temp->next != NULL) {
            if(temp->next==head) return true;
            temp = temp->next;
        }

        return false;
    }
};
