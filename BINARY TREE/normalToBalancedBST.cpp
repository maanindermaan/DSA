
// void inorder(TreeNode<int>* root , vector<int>&in){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left , in);
//     in.push_back(root->data);
//     inorder(root->right , in);
// }


// TreeNode<int>* inorderToBst(int s , int e , vector<int> inorderVal){
//     if(s>e){
//         return NULL;
//     }
    
//     int mid = (s+e)/2;
//     TreeNode<int>* root = new TreeNode<int>(inorderVal[mid]);
//     root->left = inorderToBst(s , mid-1 , inorderVal);
//     root->right = inorderToBst(mid+1 , e , inorderVal);
//     return root;
// }


// TreeNode<int>* balancedBst(TreeNode<int>* root) {
//     vector<int>inorderVal;
// //     Store inorder -> sorted values
//     inorder(root , inorderVal);
    
//     return inorderToBst(0 , inorderVal.size() - 1 , inorderVal);
// }