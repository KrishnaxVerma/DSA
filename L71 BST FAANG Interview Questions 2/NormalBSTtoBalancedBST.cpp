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

TreeNode<int>* solve(vector<TreeNode<int>*> &v, int s, int e){
    if(s>e){
        return NULL;
    }

    int mid= (s+e)/2;
    TreeNode<int>* root= new TreeNode<int>(v[mid]->data);
    root->left= solve(v, s, mid-1);
    root->right= solve(v, mid+1, e);

    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
   vector<TreeNode<int>*> v;
   inorder(root, v);

   root= solve(v, 0, v.size()-1);

   return root;
}

int main(){
    
    return 0;
}