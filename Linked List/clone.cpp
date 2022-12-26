// // // Cloning A linked list into another
// //    void insertAtTail(Node* &head , Node* &tail , int d){
// //         Node* newNode = new Node(d);
// //         if (head == NULL) {
// //             head = newNode;
// //             tail = newNode;
// //             return;
// //         }
// //         else{
// //             tail -> next = newNode;
// //             tail = newNode;    
// //         }
// //     }



// // Node *cloneLL(Node *head)
// // {
// // 	// Step-1 -> create a clone list
// //         Node* cloneHead = NULL;
// //         Node* cloneTail = NULL;
        
// //         Node* temp = head;
// //         while(temp!=NULL){
// //             insertAtTail(cloneHead ,cloneTail , temp->data);
// //             temp = temp->next;
// //         }
// //         // Step-2 -> Create a map
// //         unordered_map<Node* , Node*> oldToNewNode;
        
// //         Node* orignalNode = head;
// //         Node* cloneNode = cloneHead;
// //         while(orignalNode != NULL && cloneNode != NULL){
// //             oldToNewNode[orignalNode] = cloneNode;
// //             orignalNode = orignalNode -> next;
// //             cloneNode = cloneNode -> next;
// //         }
// //         orignalNode = head;
// //         cloneNode = cloneHead;
// //         while(orignalNode!=NULL){
// //             cloneNode->random = oldToNewNode[orignalNode -> random];
// //             orignalNode = orignalNode -> next;
// //             cloneNode = cloneNode -> next;
// //         }
// //         return cloneHead;

// // }


















// // Approach 2
// class Solution
// {
//     private:
//     void insertAtTail(Node* &head , Node* &tail , int d){
//         Node* newNode = new Node(d);
//         if (head == NULL) {
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         else{
//             tail -> next = newNode;
//             tail = newNode;    
//         }
//     }
//     public:
//     Node *copyList(Node *head){
//         //Step-1 -> Create a clone list
        
//         Node* cloneHead = NULL;
//         Node* cloneTail = NULL;
        
//         Node* temp = head;
//         while(temp!=NULL){
//             insertAtTail(cloneHead ,cloneTail , temp->data);
//             temp = temp->next;
//         }
        
//         //step2: cloneNodes add in between Original List
//         Node* originalNode = head;
//         Node* cloneNode = cloneHead;
//         while(originalNode != NULL && cloneNode != NULL){
//             Node* next = originalNode -> next;
//             originalNode -> next = cloneNode;
//             originalNode = next;
            
//             next = cloneNode -> next;
//             cloneNode -> next = originalNode;
//             cloneNode = next;
//         }
        
//         //step3: random pointer copy. Here random is named as arb
//         temp = head;
//         while(temp!=NULL){
//             if(temp->next!=NULL){
                
//                 temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
//                 // OR
//                 // if(temp->arb !=NULL){
//                 // temp->next->arb = temp->arb->next;    
//                 // }
//                 // else{
//                 //     temp->next = temp->arb;
//                 // }
//             }
//             temp = temp->next->next;
//         }
        
//         //step 4: revert changes done in step 2
//         originalNode = head;
//         cloneNode = cloneHead;
        
//         while(originalNode != NULL & cloneNode != NULL) {
//             originalNode -> next = cloneNode -> next;
//             originalNode = originalNode -> next;
//             if(originalNode != NULL){
//                 cloneNode -> next = originalNode -> next;
//             }
//             cloneNode = cloneNode -› next:
//         }
//         //step 5: return ans;
//         return cloneHead;
//     }

// };