#include<iostream>
#include<map>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    
    // Constructor 
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
    
    // Destructor 
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for the  value "<<value<<endl;
    }
};







 void insertAtTail(Node* &tail , int element , int d){
    // Assuming element is present in the list

    // Empty list
    if(tail == NULL){
        Node* temp= new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else{ //Non empty list;
        Node* curr = tail;
    while(curr->data!=element){
        curr=curr->next;
    }
    // Element is found now !
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
 }



 void print(Node* tail){
    Node* temp = tail;


    // Empty list
    if(tail==NULL){
        cout<<"Khali hai bsdk"<<endl;
        return;
    }
    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    } while ( tail != temp);
    cout<<endl;

}



















void deleteNode(Node* &tail , int value){
    // empty list
    if(tail == NULL){
        cout<<"Empty list chutiye teri maa delete kru !"<<endl;
        return;
    }
    // Non empty list
    else{
        // Assuming value is presnt in linked list
        Node* prev = tail;
        Node * curr = prev->next;
        while (curr->data!=value)
        {
            prev = curr;
            curr=curr->next;
        }


        prev->next = curr->next;


        // 1 Node Linked List
        if(curr==prev){
            tail = NULL;
        }


        // 2 Node Linked List
        else if(tail==curr){
            tail = prev;
        }


        curr->next = NULL;
        delete curr;
        
    }
}













// Checking whether the linked list is circular or not!
bool isCircular(Node* head){
    // Empty list
    if(head == NULL){
        return true;
    }

    // // One Node
    // if(head->next == NULL){
// We will not take this case bacause temp is strting from head->next and in case of curcular single node it will always point to itslef and will not enter the other loop 
    // }    


    // General Case
    Node* temp =head->next;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;

}
















bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node* , bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp] == true){
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
            return NULL;
        }
        fast = fast->next;
        slow = slow->next;
        if(slow == fast){
            return true;
        }
    }
    return false;

}



































































int main(){
    Node* tail = NULL;

    // Empty list insertion ; 
    insertAtTail(tail , 5 , 3);
    print(tail);
    insertAtTail(tail , 3 , 5);
    print(tail);
    // insertAtTail(tail , 5 , 7);
    // print(tail);
    // insertAtTail(tail , 7, 9);
    // print(tail);
    // insertAtTail(tail , 5 , 6);
    // print(tail);
    // insertAtTail(tail , 9 , 10);
    // print(tail);
    // insertAtTail(tail , 3 , 4);
    // print(tail);
    // deleteNode(tail , 3);
    // print(tail);
    if(isCircular(tail)){
        cout<<"yes it is circular"<<endl;
    }
    else{
        cout<<"hatt bkl"<<endl;
    }
return 0;
}