
class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // edge case
        if(head==NULL || head->next==NULL) return;
        
        Node* slow = head;
        Node* fast = head;
        
        // Detect loop using Floyd’s cycle detection algorithm
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) 
                break;
        }
        
        if(fast==NULL || fast->next==NULL) return; // return if it is a singly list
        
        slow = head;
        // edge case when there is cirular list
        if(slow == fast){
            while(slow->next!=fast) slow = slow->next;
            slow->next=NULL;
            return;
        }
        
        while(slow->next!=fast->next){
            slow= slow->next;
            fast= fast->next;
        }
        fast->next=NULL;
        return;
    }
};
