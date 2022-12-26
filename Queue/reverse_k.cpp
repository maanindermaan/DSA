// // Reverse first k elements of Q
// // Algorithm 
//     // STEP 1 : Pop first k elements from Q and put into Stack
//     stack<int>s;
//     for(int i=0 ; i<=k ; i++){
//         int vals = q.front();
//         q.pop();
//         s.push(vals);
//     }
    
//     // STEP 2 : Fetch from stack and push into queue
//     while(!s.empty()){
//         int vals = s.top();
//         s.pop();
//         q.push(vals);
//     }
    
//     // STEP : 3 Fetch first (n-k) elements from Q and push back.
//     int t = q.size() - k;
    
//     while(t--){
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }
//     return q;