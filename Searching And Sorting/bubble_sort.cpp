// // Bubble Sorting 
// // #include <bits/stdc++.h> 
// // void bubbleSort(vector<int>& arr, int n)
// // {   
// //     for(int i = 1 ; i<n ; i++){
// //     For round 0 to n-1
// //         for(int j = 0 ; j<n-i ; j++){
//     // Proccesed elemeent till (n-i)th index
// //             if(arr[j]>arr[j+1]){
// //                 swap(arr[j] , arr[j+1]);
// //             }
// //         }
// //     }
// // }
// #include <bits/stdc++.h> 
// void bubbleSort(vector<int>& arr, int n)
// {   
//     for(int i = 1 ; i<n ; i++){
//         bool swapped = false;
//         for(int j = 0 ; j<n-i ; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(swapped == false){
//             break;
//         }
//     }
// }

