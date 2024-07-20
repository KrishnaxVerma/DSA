#include <iostream>
using namespace std;

void inorder(TreeNode<int>* root, vector<TreeNode<int>*> &v){
    if(root==NULL){
        return ;
    }

    inorder(root->left, v);
    v.push_back(root);
    inorder(root->right, v);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<TreeNode<int>*> v;
    inorder(root, v);

    root= v[0];

    for(int i=0;i<v.size()-1;i++){
        v[i]->left= NULL;
        v[i]->right= v[i+1];
    }

    v[v.size()-1]->right=NULL;
    v[v.size()-1]->left =NULL;

    return root;
}

int main(){
    
    return 0;
}