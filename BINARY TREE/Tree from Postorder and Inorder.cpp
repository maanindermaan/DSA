// Tree from Postorder and Inorder 
//         int findPos(int in[] , int element , int n){
//         for(int i=0 ; i<n ; i++){
//             if(in[i] == element){
//                 return i;
//             }
//         }
//         return -1;
//     }

//     Node* solve(int in[], int post[] , int &preOrderIndex , int inOrderStart , int inOrderEnd , int n){
        
        
        
        
//     // Base case
//     if(preOrderIndex < 0 || inOrderStart > inOrderEnd){
//         return NULL;
//     }
    
    
    
    
//     int element = post[preOrderIndex--];
//     Node* root = new Node(element);
//     int position = findPos(in , element , n);
    
    
    
    
    
//     // Recursive Calls
    
//     // Yeah call pehle aajayegi bas iske case mein 
//     root->right = solve(in , post , preOrderIndex , position+1 , inOrderEnd , n);
//     root->left = solve(in , post , preOrderIndex , inOrderStart , position-1 , n);
    
    
//     return root;
// }