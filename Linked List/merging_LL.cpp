// // Merging Two Sorted Linked list that comes Sorted after merging as well

// #include <bits/stdc++.h> 
// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the linked list node structure.
    
//     template <typename T>
//     class Node {
//         public:
//         T data;
//         Node* next;

//         Node(T data) {
//             next = NULL;
//             this->data = data;
//         }

//         ~Node() {
//             if (next != NULL) {
//                 delete next;
//             }
//         }
//     };

// ************************************************************/
// Node<int>* solve(Node<int>* first, Node<int>* second){
    
// //     if only one element is present in first list
//     if(first->next == NULL){
//         first->next = second;
//         return first;
//     }
    
//     Node<int>* curr1 = first;
//     Node<int>* next1 = curr1->next;
//     Node<int>* curr2 = second;
//     Node<int>* next2 = curr2->next;
//     while(next1 != NULL && curr2 != NULL){
// //         Add nodes in between the first list
//         if((curr2->data >= curr1->data)&&(curr2->data <= next1->data) ){
//         curr1->next = curr2;
//         next2 = curr2->next;
//         curr2->next = next1;
// //         Update pointers
//         curr1 = curr2;
//         curr2 = next2;
//         }
//         else{
// //         Now we have to move curr1 and next1 forward because the number doesnot lies between the given interval.
//         curr1 = next1;
//         next1 = next1->next;
//         if(next1 == NULL){//Agar next1 null hai toh bachi hui saari list uthake dusri bachi hui list ke aage laga do.
//             curr1->next = curr2;
//             return first;
//         }
//     }
// }
//     return first;
// }
// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     if(first == NULL){
//         return second;
//     }
//     if(second == NULL){
//         return first;
//     }
//     if(first->data <= second->data){
//         solve(first , second);
//     }
//     else{
//         solve(second , first);
//     }
// }
