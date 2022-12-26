// Reversing k nodes in a linked list
// Node* kReverse(Node* head, int k) {
// //     base case
//     if(head == NULL){
//         return NULL;
//     }
// //     Case 1 Reversing k nodes
//     Node* next = NULL;
//     Node* curr = head;
//     Node* prev = NULL;
//     int count= 0;
//     while(curr!=NULL && count<k){
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }
// //     Case 2 Recursion
//     if( next != NULL ){
//         head->next = kReverse(next , k);
//     }
// //     Case 3 returning head value
//     return prev;
// }



















