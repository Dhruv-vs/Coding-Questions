class Solution {
  public:
    int countNodes(Node* head) {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) { 
            count++;
            temp = temp->next;
        }
        return count;
    }

    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* nex;
        while (head) {
            nex = head->next;
            head->next = prev;
            prev = head;
            head = nex;
        }
        return prev;
    }

    bool isPalindrome(Node *head) {
        if (!head || !head->next) return true; // Edge case for empty or single-node list
        
        Node *pointer1 = head;
        Node *pointer2 = head;
        int count1 = countNodes(head);
        int mid = count1 / 2;

        // Move pointer2 to the middle
        for (int i = 0; i < mid; i++) {
            pointer2 = pointer2->next;
        }

        // If odd, skip the middle element
        if (count1 % 2 != 0) {
            pointer2 = pointer2->next;
        }

        // Reverse the second half
        Node* point2 = reverse(pointer2);

        // Compare the two halves
        while (point2) {
            if (pointer1->data != point2->data) return false;
            pointer1 = pointer1->next;
            point2 = point2->next;
        }

        return true;
    }
};
