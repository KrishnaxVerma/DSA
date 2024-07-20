#include <iostream>
#include <stack>
#include <vector>
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

vector <int> preorder(node* root)
{
  // Your code here

    vector<int> ans;
    if(root==NULL){
        return ans;
    }

    stack<node*> s;
    s.push(root);

    while(!s.empty()){
        
        node* temp= s.top();
        s.pop();
        ans.push_back(temp->data);
        
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
    }
    
    return ans;
}



int main(){
    
    return 0;
}