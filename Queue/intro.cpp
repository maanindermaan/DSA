// Queue stl basic declarations
#include<iostream>
#include<queue>
using namespace std;
int main(){
    
    // Creating a queue
    queue<int> q;

    // inserting element 
    q.push(10);
    cout<<"front of queue is : "<<q.front()<<endl;
    q.push(20);
    cout<<"front of queue is : "<<q.front()<<endl;
    q.push(30);
    cout<<"front of queue is : "<<q.front()<<endl;

    // Size
    cout<<"Size of element is : "<<q.size()<<endl;

    // Removing element
    q.pop();
    cout<<"front of queue is : "<<q.front()<<endl;


    cout<<"Size of element is : "<<q.size()<<endl;

    // Empty Queue
    if(q.empty()){
        cout<<"Queue is empty !"<<endl;
    }
    else{
        cout<<"Queue is not empty !"<<endl;
    }
return 0;
}