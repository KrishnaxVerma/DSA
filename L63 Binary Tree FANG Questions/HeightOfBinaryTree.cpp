#include <iostream>
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

//TC O(n) SC(n)
int height(node* root){

    //base case
    if(root==NULL){
        return 0;
    }

    int left= height(root->left);
    int right= height(root->right);

    int ans= max(left,right)+1;
    return ans;
}

int main(){
    
    return 0;
}