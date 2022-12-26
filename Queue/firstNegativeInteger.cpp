// First Negative interger in every window of size k 
// vector<long long> printFirstNegativeInteger(long long int A[],
//                                              long long int N, long long int K) {
                                                 
//         deque<long long int>dq;
//         vector<long long>ans;
        
//         // Process Window of k size
        
//         for(int i=0 ; i<K ; i++){
//             if(A[i]<0){
//                 dq.push_back(i);
//             }
//         }
        
//         // Storing ans of first k sized window
//         if(dq.size()>0){
//             ans.push_back(A[dq.front()]);
//         }
//         else{
//             ans.push_back(0);
//         }
        
//         // Process for remaining windows 
        
//         // Removal
//         for(int i=K ; i<N ; i++){
//             if(!dq.empty() && i - dq.front() >= K){
//                 dq.pop_front();
//             }
        
//         // Addition
//         if(A[i] < 0){
//             dq.push_back(i);
//         }
//         // Answer Store
//                 if(dq.size()>0){
//             ans.push_back(A[dq.front()]);
//         }
//         else{
//             ans.push_back(0);
//         }
//         }
//         return ans;
//  }
