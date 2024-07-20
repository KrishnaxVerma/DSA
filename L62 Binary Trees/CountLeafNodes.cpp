#include <iostream>
using namespace std;

void inorder(BinaryTreeNode<int>* root, int &count){//LNR

    //base case
    if(root==NULL){
        return ;
    }

    inorder(root->left);

    if(root->left==NULL && root->right==NULL){
        count++;
    }

    inorder(root->right);
}

int noOfLeafNode(BinaryTree<int>* root){

    int cnt=0;
    inorder(root,cnt);
    return cnt;
}

int main(){
    
    return 0;
}