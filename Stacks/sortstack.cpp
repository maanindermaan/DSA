// //Sorting a Stack
// #include <bits/stdc++.h> 


// void sortedInsert(stack<int> &stack , int num){
// //     Base Case
//     if((stack.empty()) || (!stack.empty() && stack.top() < num)){
//         stack.push(num);
//         return;
//     }
    
//     int n = stack.top();
//     stack.pop();
    
// //     Recusrive Call
//     sortedInsert(stack , num);
//     stack.push(n);
// }


// void sortStack(stack<int> &stack)
// {
// // 	Base Case
//     if(stack.empty()){
//         return;
//     }
    
//     int num = stack.top();
//     stack.pop();
    
// //   Recursive Call
//     sortStack(stack);
    
//     sortedInsert(stack , num);
// }