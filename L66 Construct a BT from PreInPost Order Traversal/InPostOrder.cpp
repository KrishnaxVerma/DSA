#include <bits/stdc++.h>
using namespace std;

//using maps
void createMapping(int in[], map<int, int>& NodeToIndex, int n){
        for(int i=0;i<n;i++){
            NodeToIndex[in[i]]=i;
        }
    }
    
    Node* solve(int in[], int post[], int& index, int inorderStart, int inorderEnd,int n, map<int, int>& NodeToIndex){
        
        //base case
        if(index<0 ||  inorderStart > inorderEnd){
            return NULL;
        }
        
        int element = post[index--];
        Node* root = new Node(element);
        int position = NodeToIndex[element];
        
        //recursive call
        // in case of post and inorder we first fill the right part of tree
        root->right= solve(in, post, index, position+1 , inorderEnd, n, NodeToIndex);
        root->left= solve(in, post, index, inorderStart, position-1, n, NodeToIndex);
        
        return root;
    }
    
    Node *buildTree(int n, int in[], int post[]) {
        // Your code here
        int postorderindex=n-1;
        map<int, int> NodeToIndex;
        createMapping(in, NodeToIndex, n);
        Node* ans = solve(in, post, postorderindex, 0, n-1, n, NodeToIndex);
        return ans;
    }