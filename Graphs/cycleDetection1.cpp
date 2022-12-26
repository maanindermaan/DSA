// // CYCLE DETECTION IN UNDIRECTED GRAPH USING BFS
// #include<unordered_map>
// #include<list>
// #include<queue>


// bool isCyclic(int src , unordered_map <int , bool> &visited , unordered_map<int , list<int>> &adjList){
//     unordered_map <int , int> parent;
//     parent[src] = -1;
//     visited[src] = 1;
//     queue<int>q;
//     q.push(src);
    
//     while(!q.empty()){
//         int frontNode = q.front();
//         q.pop();
        
//         for(auto neighbour : adjList[frontNode]){
//             if(visited[neighbour] == true && neighbour != parent[frontNode]){
//                 return true;
//             }
//             else if(!visited[neighbour]){
//                 q.push(neighbour);
//                 visited[neighbour] = 1;
//                 parent[neighbour] = frontNode;
//             }
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
//             bool ans = isCyclic( i , visited , adjList);
//             if(ans == true){
//                 return "Yes";
//             }
//         }
//     }
//     return "No";
// }
