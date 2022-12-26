// // // Using DFS TRAVERSAL IN UNDIRECTED GRAPH
// #include<unordered_map>
// #include<list>
// #include<queue>

// bool isCyclic(int node, int parent , unordered_map <int , bool> &visited , unordered_map<int , list<int>> &adjList){
//     visited[node] = true;
    
//     for(auto neighbour : adjList[node]){
//         if(!visited[neighbour]){
//             bool cycleDetected = isCyclic(neighbour , node , visited , adjList);    
//             if(cycleDetected){
//                 return true;
//             }
//         } 
//         else if (neighbour != parent){
// //             Cycle Present
//             return true;
//         }
//     }
//     return false;
// }


// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     //     Prepare ADJ LIST
//     unordered_map<int , list<int>> adjList;
//     for(int i=0 ; i<edges.size() ; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];
        
//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//     }
    
// //     To handle disconnected components
//     unordered_map <int , bool> visited;
//     for(int i=0 ; i<n ; i++){
//         if(!visited[i]){
//             bool ans = isCyclic( i,-1 , visited , adjList);
//             if(ans == true){
//                 return "Yes";
//             }
//         }
//     }
//     return "No";
// }
