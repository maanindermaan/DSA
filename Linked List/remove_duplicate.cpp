// Removing Duplicates from Sorted List

/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

// Node * uniqueSortedList(Node * head) {
// //     Empty list
//     if(head == NULL){
//         return NULL;
//     }
//     Node* curr = head;
// //     Non Empty List
//     while(curr != NULL){
//         if((curr->next != NULL) && curr->data == curr->next->data){
//             Node* next_next = curr->next->next;
//             Node* nodeToDelete = curr->next;
//             delete(nodeToDelete);
//             curr->next = next_next;
//         }
// //      When they are not equal 
//         else{
//             curr = curr->next;
//         }
   












// Removing Duplicates from Sorted List

/****************************************************************
    Following is the class structure of the Node class:
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
*****************************************************************/

// Node *removeDuplicates(Node *head)
// {
// //     Empty List
//     if(head == NULL){
//         return NULL;
//     }
// //     Non empty List
//     Node * curr = head;
//     while(curr!=NULL){
//         Node* temp = curr->next;
//         while(temp!=NULL){
//             if(curr->data == temp->data){
//                 Node* nodeToDelete = temp;
//                 delete(nodeToDelete);
//                 temp = temp->next;
//             }
//             else{
//                 curr = curr->next;
//             }
//         }
        
//     }
//     return head;
// }
