// Approach 1  ->  ITERATIVE SOLUTION

// Node* reverseLinkedList(Node *head)
// {
//     if(head == NULL || head->next == NULL){
//         cout<<"Not possible";
//         return head;
//     }
    
    
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = NULL;
    
//     while(curr!=NULL){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward; 
//     }
//     return prev;//New head because head points at first place
// }






// Apporoach 3 recursive approach
// void printReverse(Node *head)
// {
//     // Base case
//    if (head == NULL)
//    return;

//    // print the list after head node
//    printReverse(head->next);

//    // After everything else is printed, print head
//    cout << head->data << " ";     
// }







// Approach 2 Recursive solutuion 

// void reverse(Node* &head , Node* curr , Node* prev){
//     if( curr == NULL){
//         head = prev;
//         return;
//     }
//     Node* forward = curr->next;
//     reverse(head , forward , curr);
//     curr -> next = prev; 
// }





// Node* reverseLinkedList(Node *head)
// {
//     Node* prev = NULL;
//     Node* curr = head;
//     reverse(head , curr , prev);
//     return head;
//     /*if(head == NULL || head->next == NULL){
//         return head;
//     }
    
    
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = NULL;
    
//     while(curr!=NULL){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward; 
//     }
//     return prev;*/
// }


