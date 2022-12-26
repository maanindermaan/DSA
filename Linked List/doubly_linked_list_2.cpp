// Doubly Linked List If A DLL is NOT Given
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
    // Destructor 
    ~Node(){
        int value = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for data "<<value<<endl;
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
void insertAtHead(Node* &head,Node* &tail , int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head=temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}



// Insertion at tail
void insertAtTail(Node* &head ,Node* &tail , int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head=temp;
        tail = temp;
    }
   else{
    Node* temp = new Node(d); 
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
   }
}



// Middle insertion 
void insertAtMiddle(Node* &tail , Node* &head ,int position , int d){
    
    
     // Insert at start
    if(position == 1){
        insertAtHead(head,tail , d);
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
        insertAtTail(head, tail , d);
        return;
    }
    //Creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}








void deleteNode(int position , Node* &head){
    // Deleting First node 
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        // head = head->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        
        int count =1;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}






void reverseList(Node* head){
    if(head == NULL || head->next ==NULL){
        return;
    }

    Node* temp = NULL;
    Node * curr = head;
    while(curr!=NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    return;
}







int main(){
    // Node* node1 = new Node(100);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    cout<<getLength(head);

    insertAtHead(head,tail,55);
    print(head);
    cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;
cout<<endl;
    insertAtTail(head,tail , 11);
    print(head);
    cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;
cout<<endl;

    insertAtTail(head,tail , 12);
    print(head);
    cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;
cout<<endl;

    insertAtTail(head, tail , 13);
    print(head);
    cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;
cout<<endl;

    insertAtMiddle(tail , head , 4 , 5555);
    print(head);
    cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;
cout<<endl;

    insertAtMiddle(tail , head , 6 , 999);
    print(head);
    cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;
cout<<endl;

deleteNode(1,head);
print(head);
cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;
deleteNode(4,head);
print(head);
cout<<"HEAD "<<head->data<<endl;
cout<<"TAIL "<<tail->data<<endl;

reverseList(head);
print(head);
}