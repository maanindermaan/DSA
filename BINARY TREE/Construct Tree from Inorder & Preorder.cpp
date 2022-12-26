// // Construct Tree from Inorder & Preorder
// class Solution{
//     public:
    
    
    
//         int findPos(int in[] , int element , int n){
//         for(int i=0 ; i<n ; i++){
//             if(in[i] == element){
//                 return i;
//             }
//         }
//         return -1;
//     }
    
    
    
//     Node* solve(int in[], int pre[] , int preOrderIndex , int inOrderStart , int inOrderEnd , int n){
        
        
        
        
//     // Base case
//     if(preOrderIndex >= n || inOrderStart > inOrderEnd){
//         return NULL;
//     }
    
    
    
    
//     int element = pre[preOrderIndex++];
//     Node* root = new Node(element);
//     int position = findPos(in , element , n);
    
    
    
    
    
//     // Recursive Calls
//     root->left = solve(in , pre , preOrderIndex , inOrderStart , position-1 , n);
//     root->right = solve(in , pre , preOrderIndex , position+1 , inOrderEnd , n);
    
//     return root;
// }


//     Node* buildTree(int in[],int pre[], int n){
//         int preOrderIndex = 0;
//         Node* ans = solve(in , pre , preOrderIndex , 0 , n-1 , n);
//         return ans;
//     }
// };