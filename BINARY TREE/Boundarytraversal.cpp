// Boundary traversal
// class Solution {
// public:
    
//     void leftTraversal(Node* root , vector<int>& ans){
//         if(root == NULL || (root->left==NULL && root->right==NULL)){
//             return;
//         }
        
//         ans.push_back(root->data);
//         if(root->left){
//             leftTraversal(root->left , ans);
//         }
//         else{
//             leftTraversal(root->right , ans);
//         }
        
//     }
    
//     void leafTraversal(Node* root , vector<int>& ans){
//         // Base case
//         if(root == NULL){
//             return;
//         }
        
//         if(root->left == NULL && root->right==NULL){
//             ans.push_back(root->data);
//             return;
//         }
        
//         leafTraversal(root->left , ans);
//         leafTraversal(root->right , ans);
//     }
    
//     void rightTraversal(Node* root , vector<int>& ans){
        
//         if(root == NULL || (root->left==NULL && root->right==NULL)){
//             return;
//         }
        
//         if(root->right){
//             rightTraversal(root->right , ans);
//         }
//         else{
//             rightTraversal(root->left ,ans);
//         }
        
//         // Wapas Aagye
//         ans.push_back(root->data);
//     }
    
//     vector <int> boundary(Node *root)
//     {
//         vector<int> ans;
//         if(root == NULL){
//             return ans; 
//         }
        
//         // Root data store
//         ans.push_back(root->data);
        
//         // Left data store
//         leftTraversal(root->left , ans);
        
//         // Leaf node data store
        
//         // Left subtree
//         leafTraversal(root->left , ans);
//         // Right Subtree
//         leafTraversal(root->right , ans);
        
//         // Right Data Store in reverse order
//         rightTraversal(root->right , ans);
        
//         return ans;
//     }
// };