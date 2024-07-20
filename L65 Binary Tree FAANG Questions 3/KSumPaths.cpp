// K Sum Paths
#include <bits/stdc++.h>
using namespace std;

class Solution{
/*
Time Complexity: O(N^2)
Auxiliary Space: O(Height of Tree)
*/
  public:
  void solve(Node* root, int k, vector<int> path, int &count){
      //base case
      if(root==NULL){
          return ;
      }
      
      path.push_back(root->data);
      
      //left
      solve(root->left, k, path, count);
      //right
      solve(root->right, k, path, count);
      
      int sum=0;
      int size=path.size();
      for(int i=size-1;i>=0;i--){
          sum+=path[i];
          
          if(sum==k) count++;
      }
      
    //   path.pop_back();
    // Does not need popback bcoz vector is called by value
      
  }
  
    int sumK(Node *root,int k)
    {
        // code here 
        vector<int> path;
        int count=0;
        solve(root, k, path, count);
        return count;
    }
};