// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node {
    
    public:
        int data;
        node* left;
        node*right;
        
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
};

    node* buildTree(node* root){
        
        
        int data;
        cout<<"enter data"<<endl;
        cin>>data;
        
        
        if(data ==-1){
            return NULL;
        }
        
        root = new node(data);
        
        cout<<"enter data to the left of "<<data<<endl;
        root->left = buildTree(root->left);
         cout<<"enter data to the right of "<<data<<endl;
        root->right = buildTree(root->right);
        
        return root;
    }
    
   void inorderTraversal(node* root) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " "; 
    inorderTraversal(root->right);
}

void preOrderTraversal(node* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " "; 
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node* root) {
    if (root == NULL) {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " "; 
}


int main() {
 
    node* root = NULL;
    
    root = buildTree(root);
    
    inorderTraversal(root);
    preOrderTraversal(root);
    postOrderTraversal(root);
    
    
    return 0;
}
