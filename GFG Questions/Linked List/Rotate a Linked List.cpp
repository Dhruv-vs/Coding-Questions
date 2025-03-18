class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if (!head || !head->next || k == 0) return head; //edge case
        Node* temp = head;
        int length = 1; // calculate length and put 1 as head exists
        while(temp->next!=NULL){
            length++;
            temp=temp->next;
        }
        temp->next = head;
        
        k = k%length; // to prevent repetition as if k>length
        if(k==0){
            temp->next = NULL;
            return head;
        }
        
        Node* ans = head;
        while(k){
            k--;
            ans = ans->next;
        }
        Node* prev = head;
        while(prev->next!=ans){
            prev = prev->next;
        }
        prev->next = NULL;
        return ans;
    }
};
