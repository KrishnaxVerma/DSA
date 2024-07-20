#include <iostream>
using namespace std;

// TC O(n) SC O(H)
bool isBST(BinaryTreeNode<int> *root, int min, int max){

    //base case
    if(root == NULL){
        return true;
    }

    if(root->data <= max && root->data >= min){
        bool left= isBST(root->left, min, root->data);
        bool right= isBST(root->right, root->data, max);
        return left && right;
    }
    else{
        return false;
    }
}

bool validateBST(BinaryTreeNode<int> *root) {

    return isBST(root, INT_MIN, INT_MAX);
}

int main(){
    
    return 0;
}