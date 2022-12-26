

// void dfs(int &node , unordered_map<int , bool>&visited , unordered_map<int , list<int>> &adjList , vector<int>&component){
    
// //     ans Store
//     component.push_back(node);
    
// //     Mark visited
//     visited[node] = 1;
    
// //     har connected node ke liye recursive call
//     for(auto i:adjList[node]){
//         if(!visited[i]){
//             dfs( i , visited , adjList , component);
//         }
//     }
// }


// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
// //     Prepare ADJ LIST
//     unordered_map<int , list<int>> adjList;
//     for(int i=0 ; i<edges.size() ; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];
        
//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//     }
    
//     vector<vector<int>> ans;
//     unordered_map<int , bool>visited;
    
// //     For all nodes call DFS , if not visited
//     for(int i=0 ; i< V ; i++){
//         if(!visited[i]){
//         vector<int>component;
//         dfs(i , visited , adjList , component);
//         ans.push_back(component);            
//         }
//     }
//     return ans;
// }