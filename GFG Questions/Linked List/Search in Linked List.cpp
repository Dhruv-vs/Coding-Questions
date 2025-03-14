class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        while(n){
            if(head->data==key) return true;
            
            head= head->next;
            n--;
        }
        return false;
    }
};
