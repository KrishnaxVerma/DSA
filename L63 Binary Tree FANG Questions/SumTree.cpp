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

//TC O(n) SC O(h)
pair<bool,int> isSumTreeFast(node* root){

    //base case
    if(root==NULL){
        pair<bool,int> p= make_pair(true,0);
        return p;
    }

    if(root->left==NULL && root->right==NULL){
        pair<bool,int> p= make_pair(true,root->data);
        return p;
    }

    pair<bool,int> leftAns= isSumTreeFast(root->left);
    pair<bool,int> rightAns= isSumTreeFast(root->right);

    bool left= leftAns.first;
    bool right= rightAns.first;

    bool condn= root->data == leftAns.second + rightAns.second;

    pair<bool,int> ans;

    if(left && right && condn){
        ans.first=true;
        ans.second=2*root->data;
    }
    else{
        ans.first=false;
    }

    return ans;
}

bool isSumTree(node* root){

    return isSumTreeFast(root).first;
}

int main(){
    
    return 0;
}