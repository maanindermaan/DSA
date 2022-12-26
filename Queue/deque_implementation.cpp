// Deque Implementation 
// #include <bits/stdc++.h> 
// class Deque{
//     int *arr;
//     int size;
//     int front;
//     int rear;
// public:
//     // Initialize your data structure.
//     Deque(int n)
//     {
//         size = n;
//         arr = new int[n];
//         front = rear = -1;
//     }
    
//     bool pushFront(int x)
//     {
//         // Checking whether the queue is full or not
//         if( isFull() ){
//             return false;
//     }
// //         First ELEMENT to insert
//         else if(isEmpty()){
//             front = rear = 0;
//         }
// //         Cyclic NATURE maintains
//         else if(front == 0 && rear!= size-1){
//             front = size-1;
//         }
// //         Normal Flow
//         else{
//             front --;
//         }
//         arr[front] = x;
//         return true;

//     }
//     bool pushRear(int x)
//     {
// //         Checking whether queue is full
//         if(isFull()){
//             return false;
//         }
// //            First element to insert!
//            else if( isEmpty() ){
//                front=rear=0;
//            }
//            else if( rear==size-1 && front!=0 ){
//                rear=0;//For cyclic nature
//            }
// //            Normal flow
//            else{
//                rear++;
//            }
//            arr[rear] = x;
//            return true;
//             }
        
        
        
//     int popFront()
//     {
        
//         if(isEmpty()){
//            return -1;
//         }
        
//         int ans = arr[front];
//         arr[front] = -1;
        
//         if(front == rear){//Single elment is present
//             front = rear = -1;
//         }
//         else if(front == size-1){
//             front = 0;//for cyclic nature
//         }
// //            Normal flow
//         else{
//             front++;
//         }
//         return ans;
//     }

    
//     int popRear()
//     {
                
//         if(isEmpty()){
//            return -1;
//         }
//         int ans = arr[rear];
//         arr[rear] = -1;
//         if(front == rear){//Single elment is present
//             front = rear = -1;
//         }
//         else if(rear == 0){
//             rear = size-1;//for cyclic nature
//         }
// //            Normal flow
//         else{
//             rear--;
//         }
//         return ans;
//     }

    
//     int getFront()
//     {
//         if(isEmpty()){
//             return -1;
//         }
//         return arr[front];
//     }

//     // Returns the last element of the deque. If the deque is empty, it returns -1.
//     int getRear()
//     {
//         if(isEmpty()){
//             return -1;
//         }
//         return arr[rear];
//     }


//     bool isEmpty()
//     {
//         if(front == -1){
//             return true;
//         }
//         else{            
//         return false;
//         }
//     }
        
        
//     bool isFull()
//     {
//         if(( front==0 && rear==size-1 ) || (front!=0 && rear==(front-1) % (size-1))){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };