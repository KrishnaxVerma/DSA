#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data= d;
        this->left=NULL;
        this->right=NULL;
    }

};

vector<int> topView(Node *root){
    
    vector<int> ans;
    
    if(root==NULL){
        return ans;
    }
    
    map<int,int> topnode;
    queue<pair<Node*, int>> q;
    
    q.push(make_pair(root, 0));
    
    while(!q.empty()){
        
        pair<Node*, int> temp= q.front();
        q.pop();
        
        Node* frontnode= temp.first;
        int hd= temp.second;
        
        //if one value is present for HD, then do nothing
        if(topnode.find(hd) == topnode.end()){
            topnode[hd]=frontnode->data;
        }
        
        if(frontnode->left){
            q.push(make_pair(frontnode->left,hd-1));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,hd+1));
        }
    }
    
    for(auto i: topnode){
        ans.push_back(i.second);
    }
    
    return ans;       
}

int main(){
    
    return 0;
}