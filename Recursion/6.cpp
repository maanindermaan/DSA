// // Ways to reach the Nth stair
// #include <bits/stdc++.h> 
// int countDistinctWays(int nStairs) {
// //     Base Case
//     if(nStairs < 0){
//         return 0;
//     }
//     if(nStairs == 0){
//         return 1;
//     }
// //     Recursive Relation
//     int ans = countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
//     return ans;
// }