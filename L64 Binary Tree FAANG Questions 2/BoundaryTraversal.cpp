#include <iostream>
#include <vector>
using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data= d;
        this->left=NULL;
        this->right=NULL;
    }

};

void TraverseLeft(node* root, vector<int> &ans){
    //base case
    if((root==NULL) || (root->left==NULL && root->right==NULL)){
        return ;
    }

    ans.push_back(root->data);

    if(root->left){
        TraverseLeft(root->left,ans);
    }
    else{
        TraverseLeft(root->right,ans);
    }
}

void TraverseLeaf(node* root, vector<int> &ans){

    if(root==NULL){
        return ;
    }

    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return ;
    }

    TraverseLeaf(root->left,ans);
    TraverseLeaf(root->right,ans);
}

void TraverseRight(node* root, vector<int> &ans){
    //base case
    if((root==NULL) || (root->left==NULL && root->right==NULL)){
        return ;
    }

    if(root->right){
        TraverseRight(root->right,ans);
    }
    else{
        TraverseRight(root->left,ans);
    }

    //while returning
    ans.push_back(root->data);
}

vector<int> boundary(node* root){

    vector<int> ans;
    if(root==NULL){
        return ans;
    }

    ans.push_back(root->data);

    //Traverse Left
    TraverseLeft(root->left,ans);

    //Traverse Leaf node
    //left subtree
    TraverseLeaf(root->left,ans);

    //right subtree
    TraverseLeaf(root->right,ans);

    //Traverse right part in reverse order
    TraverseRight(root->right,ans);

    return ans;
}

int main(){
    
    return 0;
}