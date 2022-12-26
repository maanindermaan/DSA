// // Flaten a bindary tree to LL
// class Solution
// {
//     public:
//     void flatten(Node *root)
//     {
//         Node* curr = root;
//         while(curr != NULL){
//             if(curr->left){
//                 Node* pred = curr->left;
//                 while(pred->right){
//                     pred = pred->right;
//                 }
//                 pred->right = curr->right;
//                 curr->right = curr->left;
/*
Instead of writng left part null you can simply add here
curr->left = NULL; after line 15 
*/



//             }
//             curr = curr->right;
//         }

// LEFT PART NULL HERE 
//         curr = root;
//         while(curr != NULL){
//             curr->left = NULL;
//             curr = curr->right;
//         }
//     }
// };