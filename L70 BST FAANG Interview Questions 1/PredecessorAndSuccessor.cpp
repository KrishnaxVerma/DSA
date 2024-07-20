#include <iostream>
using namespace std;

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // find key
    TreeNode* temp= root;
    int succ=-1;
    int pred=-1;

    while(temp!=NULL && temp->data != key){
        if(temp->data > key){
            succ= temp->data;
            temp= temp->left;
        }
        else{
            pred= temp->data;
            temp= temp->right;
        }
    }

    if(temp==NULL){
        return make_pair(pred,succ);
    }

    TreeNode* leftTree= temp->left;
    while(leftTree!=NULL){
        pred= leftTree->data;
        leftTree= leftTree->right;
    }

    TreeNode* rightTree= temp->right;
    while(rightTree!=NULL){
        succ= rightTree->data;
        rightTree= rightTree->left;
    }

    return make_pair(pred,succ);
}

int main(){
    
    return 0;
}