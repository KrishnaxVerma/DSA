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
//TC O(n^2)
bool BalancedTree(node* root){

    //base case
    if(root==NULL){
        return true;
    }

    bool left= BalancedTree(root->left);
    bool right= BalancedTree(root->right);

    bool diff= abs(height(root->left)- height(root->right))<=1;

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }

}

//TC O(n)
pair<bool,int> BalanceFast(node* root){

    if(root==NULL){
        pair<bool,int> p= make_pair(true,0);
        return p;
    }

    pair<int,int> left=BalanceFast(root->left);
    pair<int,int> right=BalanceFast(root->right);

    int leftAns=left.first;
    int rightAns=right.first;

    bool diff= abs(left.second- right.second)<=1;

    pair<bool,int> ans;
    ans.second=max(left.second,right.second)+1;

    if(leftAns && rightAns && diff){
        ans.first=true;
    }
    else{
        ans.first=false;
    }

    return ans;
}

bool isBalanced(node* root){
    return BalanceFast(root).first;
}
int main(){
    
    return 0;
}