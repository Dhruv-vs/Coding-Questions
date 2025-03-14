    int sumOfLastN_Nodes(struct Node* head, int n) {
        // modify the original list
        // // first reverse the linked list
        // Node *prev=NULL;
        // Node *temp;
        // while(head!=NULL){
        //     temp = head->next;
        //     head->next = prev;
        //     prev = head;
        //     head = temp;
        // }
        // // then sum of first n list elements
        // int sum=0;
        // while(n){
        //     sum +=prev->data;
        //     prev = prev->next;
        //     n--;
        // }
        // return sum;
        
        // second approach without modifying the original list
        int count=0;
        Node *temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        int x = count-n;
        int sum=0;
        Node *pointer = head;
        while(x){
            pointer = pointer->next;
            x--;
        }
        while(pointer){
            sum+=pointer->data;
            pointer=pointer->next;
        }
        return sum;
    }
};
