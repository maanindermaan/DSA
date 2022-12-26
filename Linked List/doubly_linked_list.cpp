// Doubly Linked List If A DLL is Given
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    // Constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};



// Traversing a Linked List
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



// Length of Linked List
int getLength(Node* head){
    int len = 0;
     Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// Insertion at head
void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;

}



// Insertion at tail
void insertAtTail(Node* &tail , int d){
    Node* temp = new Node(d); 
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}



// Middle insertion 
void insertAtMiddle(Node* &tail , Node* &head ,int position , int d){
    
    
     // Insert at start
    if(position == 1){
        insertAtHead(head , d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    
    //Insert at last position
    if(temp->next == NULL){
        insertAtTail(tail , d);
        return;
    }
    //Creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main(){
    Node* node1 = new Node(100);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getLength(head);
    insertAtHead(head,55);
    print(head);
    insertAtTail(tail , 11);
    insertAtTail(tail , 12);
    insertAtTail(tail , 13);
    print(head);
    insertAtMiddle(tail , head , 4 , 5555);
    print(head);
    
}