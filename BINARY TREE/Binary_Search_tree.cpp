// Binary Search TREE
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};



Node* levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);//Seperator daal diya

    while(!q.empty()){
        Node* temp = q.front();
        // cout<<temp->data<<" ";Not used here because temp->data may be null 
        q.pop();

        // Purana level complete traverse ho chuka haii 
        if(temp == NULL){
            cout<<endl;
            // Queue has still some child nodes
            if(!q.empty()){
                q.push(NULL);//Seperator again
            }
        }

        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
        }
            if(temp->right){
                q.push(temp->right);
        }
        }

    }
    }



Node* insertIntoBST(Node* &root , int d){
    // Base Case 
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root->data){
        // Right part call
        root->right = insertIntoBST(root->right , d);
    }

    else{
        // left part call
        root->left = insertIntoBST(root->left , d);
    }

    return root;
}


void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        insertIntoBST(root , data);
        cin>>data;
    }
}


Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}


Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}



Node* deleteFromBST(Node* root , int val){
    // Base case 
    if(root == NULL){
        return root;
    }

    if(root->data == val){
        // 0 CHILD
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }


        // 1 CHILD

        // Left Child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
        }

        // Right Child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
        }


        // 2 CHILD
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right , mini);
            return root;
        }
    }

    else if(root->data > val){
        // LEFT PART MEIN JAO
        root->left = deleteFromBST(root->left , val);
        return root;
    }

    else{
        // RIGHT PART MEIN JAO
        root->right = deleteFromBST(root->right , val);
        return root;
    }
}



int main(){
    Node* root = NULL;

    cout<<"Enter data to be inserted into BST"<<endl;
    takeInput(root);

    cout<<"Printing the bST"<<endl;
    levelOrderTraversal(root);

    cout<<"Minimum val is : "<<minVal(root)->data<<endl;
    cout<<"Maximum val is : "<<maxVal(root)->data<<endl;

    root = deleteFromBST(root , 30);


    cout<<"Printing the bST"<<endl;
    levelOrderTraversal(root);
return 0;
}