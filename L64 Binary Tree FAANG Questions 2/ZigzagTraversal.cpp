#include <iostream>
#include <bits/stdc++.h>
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

//TC SC O(n)
vector<int> zigazgTraversal(node* root){

    vector<int> result;
    if(root==NULL){
        return result;
    }

    queue<node*> q;
    q.push(root);

    bool lefttoright=true;

    while(!q.empty()){
        
        int size= q.size();
        vector<int> ans(size);

        //level process
        for(int i=0;i<size;i++){

            node* frontnode= q.front();
            q.pop();

            int index= lefttoright ? i : size-i-1;
            ans[index]= frontnode->data;

            if(frontnode->left){
                q.push(frontnode->left);
            }

            if(frontnode->right){
                q.push(frontnode->right);
            }

            //change direction
            lefttoright= !lefttoright;
        }

        for(auto i: ans){
            result.push_back(i);
        }
    }

    return result;
}

int main(){
    
    return 0;
}