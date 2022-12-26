// Implementation of class for stacks rather than STL
#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    // Constructor 
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    // push function
    void push(int element){
        if(element-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    // pop function
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;;
        }
    }
    
    // peek function
int peek(){
        if(top >= 0){
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    // isEmpty function
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.peek()<<endl;
    return 0;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();

    if(st.isEmpty()){
        cout<<"hat bkl";
    }
    else{
        cout<<"Sorry baii"<<endl;
    }
}