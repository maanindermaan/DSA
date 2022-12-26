// Max height of a binary tree
// int max(int left , int right){
//     if(left >= right){
//         right = left;
//         return left;
//     }
    
//     else{
//         left = right;
//         return right;
//     }
// }
// int height(struct Node* node)
// {
//     if(node == NULL){
//         return 0;
//     }
    
//     int left = height(node->left);
//     int right= height(node->right);
    
//     int ans = max(left, right) + 1;
//     return ans;
// }