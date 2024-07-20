// Construct Tree from Inorder & Preorder

#include <bits/stdc++.h>
using namespace std;

//without map
//TC O(n2)^2 
//SC O(n) for recursive calls
int findPosition(int in[], int element, int n, int inorderStart){
        for(int i=inorderStart;i<n;i++){
            if(in[i]==element){
                return i;
            }
        }
        
        return -1;
    }
    
    Node* solve(int in[], int pre[], int& index, int inorderStart, int inorderEnd,int n){
        
        //base case
        if(index>=n ||  inorderStart > inorderEnd){
            return NULL;
        }
        
        int element = pre[index++];
        Node* root = new Node(element);
        int position = findPosition(in, element, n, inorderStart);
        
        //recursive call
        root->left= solve(in, pre, index, inorderStart, position-1, n);
        root->right= solve(in, pre, index, position+1 , inorderEnd, n);
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preorderindex=0;
        Node* ans = solve(in, pre, preorderindex, 0, n-1, n);
        return ans;
    }


//with map and when all the values in the binary tree is unique
// TC O(nlogn) 
//SC O(n) for recursive call and storing maps
//ordered map insertion takes logn time complexity

void createMapping(int in[], map<int, int>& NodeToIndex, int n){
        for(int i=0;i<n;i++){
            NodeToIndex[in[i]]=i;
        }
    }
    
    Node* solve(int in[], int pre[], int& index, int inorderStart, int inorderEnd,int n, map<int, int>& NodeToIndex){
        
        //base case
        if(index>=n ||  inorderStart > inorderEnd){
            return NULL;
        }
        
        int element = pre[index++];
        Node* root = new Node(element);
        int position = NodeToIndex[element];
        
        //recursive call
        root->left= solve(in, pre, index, inorderStart, position-1, n, NodeToIndex);
        root->right= solve(in, pre, index, position+1 , inorderEnd, n, NodeToIndex);
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preorderindex=0;
        map<int, int> NodeToIndex;
        createMapping(in, NodeToIndex, n);
        Node* ans = solve(in, pre, preorderindex, 0, n-1, n, NodeToIndex);
        return ans;
    }