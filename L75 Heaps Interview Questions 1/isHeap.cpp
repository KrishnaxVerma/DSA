#include <iostream>
using namespace std;

class Solution {
  public:
  int countNodes(struct Node* root){
      //base case
    if(root==NULL){
        return 0;
    }  
    
    int ans= countNodes(root->left) + countNodes(root->right) + 1;
    
    return ans;
  }
  
  bool isCBT(struct Node* root, int index, int n){
      
      if(root==NULL){
          return true;
      }
      
      if(index >= n){
          return false;
      }
      
      bool left= isCBT(root->left, 2*index+1, n);
      bool right= isCBT(root->right, 2*index+2, n);
      
      return (left && right);
  }
  
  bool isMaxOrder(struct Node* root){
      
      if(root->left==NULL && root->right==NULL){
          return true;
      }
      
      if(root->right==NULL){
          return (root->data > root->left->data);
      }
      
      bool left= isMaxOrder(root->left);
      bool right= isMaxOrder(root->right);
      
      return ((root->data > root->left->data) && (root->data > root->right->data) && 
      left && right);
  }
  
    bool isHeap(struct Node* tree) {
        // code here
        int index=0;
        int totalCount= countNodes(tree);
        
        if(isCBT(tree, index, totalCount) && isMaxOrder(tree)){
            return true;
        }
        else return false;
    }
};

int main(){
    
    return 0;
}