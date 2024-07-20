#include <iostream>
using namespace std;

// TC O(n) SC O(H)
TreeNode* solve(TreeNode *root, int a, int b){
    //base case
    if(root==NULL){
        return root;
    }
    
    if(root->data > a && root->data > b){
        TreeNode* leftAns= solve(root->left, a, b);
        return leftAns;
    }

    if(root->data < a && root->data < b){
        TreeNode* rightAns= solve(root->right, a, b);
        return rightAns;
    }

    return root;
}

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    TreeNode* ans= solve(root, P->data, Q->data);
    return ans;
}

// TC O(n) SC O(1)
TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    // Write your code here.
    TreeNode* temp= root;
    while(temp!=NULL){
        if(temp->data < P->data && temp->data < Q->data){
            temp= temp->right;
        }
        else if(temp->data > P->data && temp->data > Q->data){
            temp= temp->left;
        }
        else{
            return temp;
        }
    }
}

int main(){
    
    return 0;
}