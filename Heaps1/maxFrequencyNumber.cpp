// int maximumFrequency(vector<int> &arr, int n)
// {
//     unordered_map<int , int> count;
    
//     int maxFreq = 0;
//     int maxAns = 0;
    
//     for(int i=0 ; i< arr.size() ; i++){
//         count[arr[i]]++;
//         maxFreq = max(count[arr[i]] , maxFreq);
//     }
    
//     for(int i=0 ; i,arr.size() ; i++){
//         if(count[arr[i]] == maxFreq){
//             maxAns = arr[i];
//             break;
//         }
//     }
//     return maxAns;
// }