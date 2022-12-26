// // #include<stack>
// #include<unordered_map>
// #include<list>
// #include<stack>
// void topologicalSort(int node , unordered_map<int , bool>&visited , stack<int>&s , unordered_map<int , list<int>> &adjList){
//     visited[node]= 1;
//     for(auto neighbour : adjList){
//         if(!visited[neighbour]){
//             topologicalSort(neighbour , visited , s , adjList);
//         }
//     }
    
// //     IMPORTANT!
//     s.push(node);
// }




// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
//         //     Prepare ADJ LIST
    
//     unordered_map<int , list<int>> adjList;
//     for(int i=0 ; i<e ; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];
      
//         adjList[u].push_back(v); 
//     }
    
// //     Call dfs topological sort for all functions
//     unordered_map<int , bool>visited;
//     stack<int>s;
//     for(int i=0 ; i<n ; i++){
//         if(!visited[i]){
//             topologicalSort(i , visited , s , adjList);
//         }       
//     }
//     vector<int> ans;
//     while(!s.empty()){
//         ans.push_back(s.top());
//         s.pop();
//     }
//     return ans;
// }