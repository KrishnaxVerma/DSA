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

//approach 1
vector<int> diagonal(Node *root){

   queue<Node *>q;
   q.push(root);

   vector<int>ans;

   while(!q.empty()){
       Node *temp=q.front();
       q.pop();
       Node *curr=temp;

       while(curr!=NULL){
           ans.push_back(curr->data);
           if(curr->left!=NULL){
               q.push(curr->left);
           }
           curr=curr->right;
       }
   }
   
   return ans;
}

//approach 2
void solve(Node *root, int distance, map<int, vector<int>> &diagonal){
    if(!root) return;
    
    diagonal[distance].push_back(root->data);
    
    solve(root->left, distance + 1, diagonal);
    
    solve(root->right, distance, diagonal);
}

vector<int> diagonal(Node *root){
    map<int, vector<int>> diagonal;
    solve(root, 0, diagonal);
   
    vector<int> ans;
   
    for(auto i: diagonal){
        for(int j: i.second){
           ans.push_back(j);
        }
    }
    return ans;
}

int main(){
    
    return 0;
}