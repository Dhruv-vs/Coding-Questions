class Solution {
  public:
  Node* reverse(Node* head){
      Node* prev = NULL;
      Node* temp;
      while(head){
          temp = head->next;
          head->next = prev;
          prev = head;
          head = temp;
      }
      return prev;
  }
    Node* addTwoLists(Node* num1, Node* num2) {
        Node* h1 = reverse(num1);
        Node* h2 = reverse(num2);
        int carry = 0;
        Node* h = NULL;
        Node* t = h;
        
        while(h1 && h2){
            int sum = h1->data + h2->data + carry;
            if(t==NULL){
                t = new Node(sum%10);
                h = t; // pointing h to starting node t beacuse h is NULL
            }
            else{ t->next = new Node(sum%10);
            t = t->next;
            }
            h1 = h1->next;
            h2 = h2->next;
            carry = sum/10;
        }
        
        while (h1) {
            int sum = h1->data + carry;
            if (t == NULL) {
                t = new Node(sum % 10);
                h = t;
            } else {
                t->next = new Node(sum % 10);
                t = t->next;
            }
            carry = sum / 10;
            h1 = h1->next;
        }

        while (h2) {
            int sum = h2->data + carry;
            if (t == NULL) {
                t = new Node(sum % 10);
                h = t;
            } else {
                t->next = new Node(sum % 10);
                t = t->next;
            }
            carry = sum / 10;
            h2 = h2->next;
        }

        while (carry) {
            int sum = carry;
            if (t == NULL) {
                t = new Node(sum % 10);
                h = t;
            } else {
                t->next = new Node(sum % 10);
                t = t->next;
            }
            carry = carry / 10;
        }
        
        Node* result = reverse(h);
        // code to remove leading zero
        while (result->data == 0 && result->next != NULL) {
        Node* temp = result;
        result = result->next;
        delete temp;
        }
        return result;
    }
};

// second method without taking any null
// class Solution {
// public:
//     Node* reverse(Node* head) {
//         Node* prev = NULL;
//         while (head) {
//             Node* next = head->next;
//             head->next = prev;
//             prev = head;
//             head = next;
//         }
//         return prev;
//     }

//     Node* addTwoLists(Node* num1, Node* num2) {
//         Node* h1 = reverse(num1);
//         Node* h2 = reverse(num2);
//         int carry = 0;

//         // Dummy node approach to avoid null checks
//         Node* dummy = new Node(0);
//         Node* current = dummy;

//         while (h1 || h2 || carry) {
//             int sum = carry;
//             if (h1) {
//                 sum += h1->data;
//                 h1 = h1->next;
//             }
//             if (h2) {
//                 sum += h2->data;
//                 h2 = h2->next;
//             }

//             carry = sum / 10;
//             current->next = new Node(sum % 10);
//             current = current->next;
//         }
//         Node* result = reverse(dummy->next);
        
//         // code to remove leading zero
//     while (result->data == 0 && result->next != NULL) {
//     Node* temp = result;
//     result = result->next;
//     delete temp;
//   }

//   return result;
//     }
// };
