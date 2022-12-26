// // Sorting a Linked List of 0s 1s and 2s

// /********************************
//     class Node
//     {
//     public:
//         int data;
//         Node *next;
//         Node(int data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// ********************************/

// Node* sortList(Node *head)
// {
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;
    
//     Node * temp = head;
// //     Giving number of values to the counts
//     while(temp!=NULL){
//         if(temp->data == 0 ){
//             zeroCount++;
//         }
//         else if(temp->data == 1 ){
//             oneCount++;
//         }
//         else if(temp->data == 2 ){
//             twoCount++;
//         }
//         temp = temp->next;
//     }
//     temp = head;
//     while(temp!=NULL){
//         if(zeroCount != 0){
//             temp->data = 0;
//             zeroCount--;
//         }
//         else if(oneCount != 0 ){
//             temp->data = 1;
//             oneCount--;
//         }
//         else if(twoCount != 0 ){
//             temp->data = 2;
//             twoCount--;
//         }
//     }
//     return head;
// }




















// Approach 2
// // Sorting a Linked List of 0s 1s and 2s
/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
// void insertAtTail(Node* &tail , Node* curr){
//     tail->next = curr;
//     tail = curr;
// }
// Node* sortList(Node *head)
// {
//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;
//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;
    
//     Node* curr = head;
// //     create seperate list 0s, 1s , 2s
//     while(curr!=NULL){
//         int value = curr->data;
//         if(value == 0){
//             insertAtTail(zeroTail , curr);
//         }
//         else if(value == 1){
//             insertAtTail(oneTail , curr);
//         }
//         else if(value == 2){
//             insertAtTail(twoTail , curr);
//         }
//         curr = curr->next;
//     }
// //     Merge 3 sublists
//     if(oneHead->next != NULL){
//         zeroTail->next = oneHead->next;
//         oneTail->next = twoHead->next;
//     }
//     else{
//         zeroTail->next = twoHead->next;
//     }
//     twoTail->next = NULL;
// //     Setup HEADs
//     head = zeroHead->next;

// // Deleting Dummy Nodes
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;
//     return head;
// }












