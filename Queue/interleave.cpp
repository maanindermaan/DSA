// // Interleave The First Half Of The Queue With The Second Half
// // Using QUEUE approach 
// // #include <bits/stdc++.h> 
// // void interLeaveQueue(queue < int > & q) {
// //     queue<int> Q;
// //     int size = q.size()/2;
// //     for(int i=0 ; i<size ; i++){
// //         int val = q.front();
// //         q.pop();
// //         Q.push(val);
// //     }
// //     while(!Q.empty()){
// //         int val = Q.front();
// //         Q.pop();
// //         q.push(val);
// //         val = q.front();
// //         q.pop();
// //         q.push(val);
// //     }
// // }












// // Using STACK Approach 
// #include <bits/stdc++.h> 
// void interLeaveQueue(queue < int > & q) {
//     stack<int>s;
//     int size = q.size()/2;
    
// //     First half of Queue to Stack
//     for(int i=0 ; i<size ; i++){
//         int val = q.front();
//         q.pop();
//         s.push(val);
//     }
    
// //     Stack to Queue
//     int stackSize = s.size();
//     for(int i=0 ; i<stackSize ; i++){
//         int val = s.top();
//         s.pop();
//         q.push(val);
//     }
    
// //   Moving Forward value of Queue to backward
//     for(int i=0 ; i<size ; i++){
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }
    
// //     First half of Queue again to stack
//     for(int i=0 ; i<size ; i++){
//         int val = q.front();
//         q.pop();
//         s.push(val);
//     }
    
// //     Moving According to inteleave
//     while(!s.empty()){
//         int val = s.top();
//         s.pop();
//         q.push(val);
        
//         val = q.front();
//         q.pop();
//         q.push(val);
//     }
// }