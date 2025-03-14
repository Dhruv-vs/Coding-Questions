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

// second method
class Solution {
  public:
    bool isCircular(Node *head) {
         if (head == NULL) return false;
        Node *temp = head;
        while (temp->next != NULL && temp->next != head) {
            temp = temp->next;
        }
        return (temp->next == head);
    }
};
