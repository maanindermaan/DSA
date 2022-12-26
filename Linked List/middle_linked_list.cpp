// Middle of linked list approach 1
/*
int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}


Node *findMiddle(Node *head) {
    int len = getLength(head);
    int ans = (len/2);
    Node* temp = head;
    int count = 0;
    while(count<ans){
        temp = temp->next;
        count++;
    }
    return temp;
}
*/





























// Approach 2
/*

Node* getMiddle(Node* head){
//     1 or 0 node
    if(head == NULL || head->next == NULL){
        return head;
    }
//     2 nodes
    if(head->next->next == NULL){
        return head->next;
    }
//     Main algo 
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL){
        fast = fast->next;
        if(fast !=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}


/*
int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}




Node *findMiddle(Node *head) {
    return getMiddle(head);
//     int len = getLength(head);
//     int ans = (len/2);
//     Node* temp = head;
//     int count = 0;
//     while(count<ans){
//         temp = temp->next;
//         count++;
//     }
//     return temp;
}
*/