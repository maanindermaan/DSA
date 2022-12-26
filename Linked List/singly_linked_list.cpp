// Singly Linked List
#include <iostream>
#include<map>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    
    // Constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    // Destructor 
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};


void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


void insertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


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
    temp->next = nodeToInsert;
}


void deleteNode(int position , Node* &head){
    // Deleting First node 
    if(position == 1){
        Node* temp = head;
        head = head->next;
        // Memory free start node.
        temp->next=NULL;
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
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}






void printReverse(Node *head)
{
    // Base case
   if (head == NULL)
   return;

   // print the list after head node
   printReverse(head->next);

   // After everything else is printed, print head
   cout << head->data << " ";     
}










bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node* , bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        // cycle is present
        if(visited[temp] == true){
            cout<<"Present at element !"<<temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}


















bool floydDetectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
        fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            return true;
        }
    }
    return false;

}






















// Node* getStartingNode(Node* head){
//     if(head == NULL){
//         return NULL;
//     }
//     // Node* intersection = floydDetectLoop(head);//either you can do this or you can repeat the entire flyod detect loop program

//     Node* slow = head;
//     // while(slow!=intersection){
//         slow = slow->next;
//         intersection = intersection->next;
//     }
//     return slow;
// }










// void removeLoop(Node* head){
//     if(head == NULL){
//         return;
//     }
//     // Node* startOfLoop = getStartingNode(head); -> recursion used here
//     // Node* temp = startOfLoop;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = NULL;
// }






































































int main() {
    // Creating a new node 
    Node* node1 = new Node(100);
    
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);
    insertAtHead(head,9);
    insertAtHead(head,10);
    insertAtTail(tail,11);
    insertAtMiddle(tail,head, 1 , 989);
    tail ->next = head->next;
    // print(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
    // deleteNode(1,head);
    // print(head);
    // printReverse(head);
    // print(head);
    if(floydDetectLoop(head)){
        cout<<"Circular LOOp is present";
    }
    else{
        cout<<"Hatt bsdk";
    }
    return 0;
}
