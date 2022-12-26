// // Right zView of Binary Tree
// // Should return  right view of tree
// class Solution
// {
//     public:
    
    
    
    
//     void solve(Node *root , vector<int> &ans , int level){
//     // Base Case
//     if(root == NULL){
//         return;
//     }
    
//     // We entered into next level
//     if(level == ans.size()){
//         ans.push_back(root->data);
//     }
    
//     // Recursive Calls Bas calls exchange hojayenge or kuch nahiiii!
//     solve(root->right , ans , level+1);
//     solve(root->left , ans , level+1);
// }
//     //Function to return list containing elements of right view of binary tree.
//     vector<int> rightView(Node *root)
//     {
//        vector<int>ans;
//        solve(root , ans , 0);//0 is level
//        return ans;
//     }
// };
