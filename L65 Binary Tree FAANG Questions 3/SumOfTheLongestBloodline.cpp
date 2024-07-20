//Sum of nodes on the longest path from root to leaf node

#include <bits/stdc++.h>
using namespace std;

/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
/*
Time Complexity: O(n)
Auxiliary Space: O(n)
*/
{
private:
    void solve(Node* root, int len, int &maxlen, int sum, int &maxSum){
        //base case
        if(root==NULL){
            if(len>maxlen){
                maxlen=len;
                maxSum=sum;
            }
            else if(len==maxlen){
                maxSum= max(maxSum, sum);
            }
            
            return ;
        }
        
        sum+= root->data;
        solve(root->left, len+1, maxlen, sum, maxSum);
        solve(root->right, len+1, maxlen, sum, maxSum);
    }

public:
    int sumOfLongRootToLeafPath(Node *root) {
        int len=0;
        int maxlen=0;
        
        int maxSum=INT_MIN;
        int sum=0;
        
        solve(root, len, maxlen, sum, maxSum);
        
        return maxSum;
    }
};