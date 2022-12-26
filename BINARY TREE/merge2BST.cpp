// void inorder(TreeNode<int> *root , vector<int>&in){
// //     Base Case
//     if(root == NULL){
//         return;
//     }
    
//     inorder(root->left , in);
//     in.push_back(root->data);
//     inorder(root->right , in);
// }



// vector<int> mergeArrays(vector<int>&a ,vector<int>&b){
    
//     vector<int> ans(a.size() + b.size());
    
//     int i =0 , j=0 , k=0;
    
//     while(i<a.size() && j<b.size()){
//         if(a[i]<b[j]){
//             ans[k++] = a[i];
//             i++;
//         }
//         else{
//             ans[k++] = b[j];
//             j++;
//         }
//     }
//     while(i<a.size()){
//             ans[k++] = a[i];
//             i++;
//         }
//     while(j<b.size()){
//             ans[k++] = b[j];
//             j++;
//         }
//     return ans;
// }



// TreeNode<int>* inorderToBst(int s , int e , vector<int> inorderVal){
// //     BASE CASE
//     if(s>e){
//         return NULL;
//     }
    
//     int mid = (s+e)/2;
//     TreeNode<int>* root = new TreeNode<int>(inorderVal[mid]);
//     root->left = inorderToBst(s , mid-1 , inorderVal);
//     root->right = inorderToBst(mid+1 , e , inorderVal);
//     return root;
// }





 
// TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){    
    
// //     Step 1 : store Inorder
//     vector<int> bst1 , bst2;
//     inorder(root1 , bst1);
//     inorder(root2 , bst2);
    
// //     Step 2 : merge two arrays / vectors
//     vector<int> mergeArray = mergeArrays(bst1 , bst2);
    
// //     Step 3 : USE funtion inorder to bst
//     int s = 0 ;
//     int e = mergeArray.size()-1;
//     return inorderToBst(s , e , mergeArray);