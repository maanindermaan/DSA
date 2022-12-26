// STACKS INTRODUCTION !
#include<iostream>
#include<stack>
using namespace std;
int main(){

    // Creation of stack
    stack<int> s;

    // Push Operation
    s.push(5);
    s.push(7);

    // Pop Operation
    s.pop();

    // Top Element 
    cout<<"Printing Top Element : "<<s.top()<<endl;

    // Checking wheteher it is empty or not
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    // Size of stack
    cout<<"The size of stack is : "<<s.size()<<endl;
return 0;
}

// https://en.cppreference.com/w/cpp/container/stack You can visit this site to know more functions about stack!