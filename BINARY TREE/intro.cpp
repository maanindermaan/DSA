// Introduction to Binary Trees 
#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of : "<< data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of : "<< data<<endl;
    root->right = buildTree(root->right);
    return root;
}

node* levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);//Seperator daal diya

    while(!q.empty()){
        node* temp = q.front();
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

void inorder(node* root){
    // Base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


void preorder(node* root){
    // Base Case 
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    // Base Case
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";   
}

void buildFromLevelOrderTraversal(node* &root){
    queue<node*>q;
    cout<<"Enter data for root node : "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter the data of left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }



        cout<<"Enter the data of right nodefor  "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main(){
    node* root = NULL;

    /*
    // Creating a tree
    root = buildTree(root);
    cout<<endl;

    // Level order traversal
    cout<<"Below is the level order traversal "<<endl;
    levelOrderTraversal(root);

    cout<<endl;

    cout<<"Below is the inorder traversal "<<endl;
    inorder(root);

    cout<<endl;
    cout<<"Below is the preorder traversal "<<endl;
    preorder(root);

    cout<<endl;
    cout<<"Below is the postorder traversal "<<endl;
    postorder(root);
    1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    */

    buildFromLevelOrderTraversal(root);
    levelOrderTraversal(root);
return 0;
}