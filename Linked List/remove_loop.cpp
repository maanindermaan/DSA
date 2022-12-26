
// bool floydDetectLoop(Node* head){
//     if(head == NULL){
//         return false;
//     }
//     Node* slow = head;
//     Node* fast = head;
//     while(slow != NULL && fast != NULL){
//         fast = fast->next;
//         if(fast != NULL){
//         fast = fast->next;
//         }
//         slow = slow->next;
//         if(slow == fast){
//             return true;
//         }
//     }
//     return false;

// }






















// // Node* getStartingNode(Node* head){
// //     if(head == NULL){
// //         return NULL;
// //     }
// //     // Node* intersection = floydDetectLoop(head);//either you can do this or you can repeat the entire flyod detect loop program

// //     Node* slow = head;
// //     // while(slow!=intersection){
// //         slow = slow->next;
// //         intersection = intersection->next;
// //     }
// //     return slow;
// // }










// // void removeLoop(Node* head){
// //     if(head == NULL){
// //         return;
// //     }
// //     // Node* startOfLoop = getStartingNode(head); -> recursion used here
// //     // Node* temp = startOfLoop;
// //     while(temp->next!=NULL){
// //         temp = temp->next;
// //     }
// //     temp->next = NULL;
// // }
