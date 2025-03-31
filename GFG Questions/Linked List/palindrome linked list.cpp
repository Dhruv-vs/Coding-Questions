// second method using Floyd’s Tortoise algorithm
        if (!head || !head->next) return true;
        Node* temp = head;
        int count = countNodes(temp);
        Node* slow = head;
        Node* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(count%2!=0) slow = slow->next;
        temp = head;
        Node* temp2 = reverse(slow);
        while(temp2){
            if(temp->data!=temp2->data) return false;
            temp=temp->next;
            temp2=temp2->next;
        }
        return true;
