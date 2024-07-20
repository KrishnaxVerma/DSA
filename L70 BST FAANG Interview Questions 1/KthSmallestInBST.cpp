#include <iostream>
using namespace std;
//To find the Kth largest put k= n-k+1

// TC O(n) SC O(H)
int solve(BinaryTreeNode<int>* root, int& i, int k){

    //base case
    if(root == NULL){
        return -1;
    }

    // L
    int left= solve(root->left, i, k);

    if(left!=-1){
        return left;
    }

    //N
    i++;
    if(i==k){
        return root->data;
    }

    //R
    return solve(root->right, i, k);
}

//Morris Traversal TC O(n) SC O(1)
int solve(BinaryTreeNode<int>* root, int& i, int k){

    BinaryTreeNode<int>* curr;
    BinaryTreeNode<int>* pre;
    
    if(root==NULL){
        return NULL;
    }

    curr = root;
    while(curr!=NULL){

        if(curr->left==NULL){
            i++;
            if(i==k){
                return curr->data;
            }
            curr= curr->right;
        }
        else{

            pre= curr->left;
            while(pre->right!=NULL && pre->right!=curr){
                pre= pre->right;
            }

            if(pre->right==NULL){
                pre->right= curr;
                curr= curr->left;
            }
            else{

                pre->right= NULL;
                i++;
                if(i==k){
                    return curr->data;
                }
                curr= curr->right;
            }
        }
    }

    return -1;
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i=0;
    int ans= solve(root, i, k);
    return ans;
}

int main(){
    
    return 0;
}