// Kth Ancestor in a tree
// Node* solve(Node *root, int &k, int node){
//     // Base calls
//     if(root == NULL){
//         return NULL;
//     }
//     if(root->data == node){
//         return root;
//     }
    
//     // Recursive Calls
//     Node* leftAns = solve(root->left, k , node);
//     Node* rightAns = solve(root->right , k , node);
    
    
//     // WAPAAS!
//     if(leftAns !=NULL && rightAns == NULL){
//         k--;
//         if(k<=0){
            
//             // Ans Locks HERE ab jitni baar uper jayega yehi wala root hi pass hoga!
//             k=INT_MAX;
//             return root;
//         }
//         return leftAns;
//     }
    
//     if(leftAns ==NULL && rightAns != NULL){
//         k--;
//         if(k<=0){
            
//             // Ans Locks HERE ab jitni baar uper jayega yehi wala root hi pass hoga!
//             k=INT_MAX;
//             return root;
//         }
//         return rightAns;
//     }
//     return NULL;
// }

// int kthAncestor(Node *root, int k, int node)
// {
//     Node* ans = solve(root , k ,node);
//     if(ans == NULL){
//         return -1;
//     }
//     else{
//         return ans->data;
//     }

// }