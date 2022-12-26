// // Merge Sort Linked List
// /********************************************************************

//     Following is the representation of the Singly Linked List Node:

//     class node{
//         public:
//             int data;
//             node * next;
//             node(int data){
//                 this->data=data;
//                 this->next=NULL;
//             }
//     };
    
// ********************************************************************/


// node* merge(node* left , node* right){
    
//     if(left == NULL){
//         return right;
//     }
//     if(right == NULL){
//         return left;
//     }
    
//     node* ans = new node(-1);
//     node* temp = ans;
   
// //     Merge 2 sorted linked list
//     while(left!=NULL && right!=NULL){
//         if(left->data < right->data){
//             temp->next = left;
//             temp = left;
//             left = left->next;
//         }
//         else{
//             temp->next = right;
//             temp = right;
//             right = right->next;
//         }
//     }
    
//     while(left!=NULL){
//         temp->next = left;
//         temp = left;
//         left = left->next;
//     }
//     while(right!=NULL){
//         temp->next = right;
//         temp = right;
//         right = right->next;
//     }
//     ans = ans->next;
//     return ans;
// }





// node* findMid(node* head){
//     node* slow = head;
//     node* fast = head->next;
    
//     while(fast!=NULL && fast->next!=NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }










// node* mergeSort(node *head) {
// //     Base Cases !
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
// //     Dividing into two halves after finding mid
//     node* mid = findMid(head);
    
//     node* left = head;
//     node* right = mid->next;
//     mid->next = NULL;
    
// //     Recursive calls
//     left = mergeSort(left);
//     right = mergeSort(right);
    
// //     Merging these 
//     node* result = merge(left , right);
//     return result;
// }
















