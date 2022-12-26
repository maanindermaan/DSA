// // Circular Queueu
// // #include <bits/stdc++.h> 
// // class CircularQueue{
// //     int *arr;
// //     int front;
// //     int rear;
// //     int size;
// //     public:
// //     // Initialize your data structure.
// //     CircularQueue(int n){
// //         size = n;
// //         arr = new int[size];
// //         front= rear = -1;
// //     }

    
//     bool enqueue(int value){
// //         Checking whether queue is full
//         if(( front==0 && rear==size-1 ) || ( rear==(front-1) % (size-1))){
//             return false;
//         }
// //            First element to insert!
//            else if( front==-1 ){
//                front=rear=0;
//            }
//            else if( rear==size-1 && front!=0 ){
//                rear=0;//For cyclic nature
//            }
// //            Normal flow
//            else{
//                rear++;
//            }
//            arr[rear] = value;
//            return true;
//     }


//     int dequeue(){
//         if(front == -1){
//             return -1;
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
// };







