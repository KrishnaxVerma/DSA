//Maximum sum of Non-adjacent nodes
#include <bits/stdc++.h>
using namespace std;

class Solution{
/*
Time Complexity: O(Number of nodes in the tree).
Auxiliary Space: O(Height of the Tree).
*/
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    pair<int, int> solve(Node* root){
        if(root==NULL){
            pair<int, int> p= make_pair(0,0);
            return p;
        }
        
        pair<int, int> left = solve(root->left);
        pair<int, int> right = solve(root->right);
        
        pair<int, int> res;
        res.first= root->data + left.second + right.second;
        res.second= max(left.first, left.second) + max(right.first, right.second);
        
        return res;
    }
    
    
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int, int> ans=solve(root);
        
        return max(ans.first, ans.second);
    }
};