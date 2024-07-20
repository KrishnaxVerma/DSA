#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int, map<int,vector<int>>> nodes;
        //int= horizontal distance
        //int=level
        //vector= number of nodes in same line
        queue<pair<Node*, pair<int,int>>> q;
        //int=horizontal distance
        //int=level
        vector<int> ans;
        
        if(root==NULL){
            return ans;
        }
        
        q.push(make_pair(root, make_pair(0,0)));
        
        while(!q.empty()){
            
            pair<Node*, pair<int,int>> temp= q.front();
            q.pop();
            
            Node* frontnode= temp.first;
            int hd=temp.second.first;
            int lvl=temp.second.second;
            
            nodes[hd][lvl].push_back(frontnode->data);
            
            if(frontnode->left){
                q.push(make_pair(frontnode->left, make_pair(hd-1,lvl+1)));
            }
            
            if(frontnode->right){
                q.push(make_pair(frontnode->right, make_pair(hd+1,lvl+1)));
            }
        }
        
        for(auto i: nodes){
            for(auto j:i.second){
                for(auto k: j.second){
                    ans.push_back(k);
                }
            }
        }
        
        return ans;
    }

int main(){
    
    return 0;
}