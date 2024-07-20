#include <iostream>
using namespace std;

// TC O(n) SC O(H)
bool searchInBST(BinaryTreeNode<int> *root, int x) {

    if(root == NULL){
        return false;
    }

    if(root->data == x){
        return true;
    }

    if(root->data > x){
        return searchInBST(root->left, x);
    }
    else{
        return searchInBST(root->right, x);
    }
}

// TC O(n) SC O(1)
bool searchInBST(BinaryTreeNode<int> *root, int x) {

    BinaryTreeNode<int>* temp =root;

    while(temp!=NULL){
        if(temp->data == x){
            return true;
        }

        if(temp->data > x){
            temp= temp->left;
        }
        else{
            temp= temp->right;
        }
    }

    return false;
}

int main(){
    
    return 0;
}