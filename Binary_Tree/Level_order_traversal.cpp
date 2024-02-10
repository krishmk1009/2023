// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
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
        
        root = new node(data);
        if(data ==-1){
            return NULL;
        }
        
        
        
        cout<<"enter data to the left of "<<data<<endl;
        root->left = buildTree(root->left);
         cout<<"enter data to the right of "<<data<<endl;
        root->right = buildTree(root->right);
        
        return root;
    }
    
   
    
    void levelOrderTraversal(node* root){
        queue<node*> q;
        
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            
            node*temp = q.front();
             q.pop();
            if(temp == NULL){
                cout<<endl;
                
                if(!q.empty()){
                    q.push(NULL);
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

int main() {
 
    node* root = NULL;
    
    root = buildTree(root);
    
    
    cout<<"printing the level order traversal"<<endl;
    levelOrderTraversal(root);
    return 0;
}
