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
int diameter(node* root){

    //base case
    if(root==NULL){
        return 0;
    }

    int op1= diameter(root->left);
    int op2= diameter(root->right);
    int op3= height(root->left) +1 +height(root->right);

    int ans= max(op1,max(op2,op3));

    return ans;
}


//TC O(n) SC O(n)
pair<int,int> solve(node* root){

    //base case
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }

    pair<int,int> left= solve(root->left);
    pair<int,int> right= solve(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+1+right.second;

    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;

    return ans; 
}
int diameter2(node* root){
    return solve(root).first;
}

int main(){
    
    return 0;
}