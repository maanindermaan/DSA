// Getting the starting node of Circular Linked List
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






// Node* getStartingNode(Node* head){
//     if(head == NULL){
//         return NULL;
//     }
//     Node* intersection = floydDetectLoop(head);//either you can do this or you can repeat the entire flyod detect loop program

//     Node* slow = head;
//     while(slow!=intersection){
//         slow = slow->next;
//         intersection = intersection->next;
//     }
//     return slow;
// }


// int main(){
//     use this into main 
//     cout<<getStartingNode(head)->data ----- to get a starting node
// }
// 
// 