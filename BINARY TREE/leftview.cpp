// // LEFT VIEW OF BINARY TREE
// void solve(Node *root , vector<int> &ans , int level){
//     // Base Case
//     if(root == NULL){
//         return;
//     }
    
//     // We entered into next level
//     if(level == ans.size()){
//         ans.push_back(root->data);
//     }
    
//     // Recursive Calls
//     solve(root->left , ans , level+1);
//     solve(root->right , ans , level+1);
// }

// vector<int> leftView(Node *root)
// {
//    vector<int>ans;
//    solve(root , ans , 0);//0 is level
//    return ans;
// }