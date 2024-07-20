/*
You are given a 'ROOT' of a binary search tree of integers. The given BST is also a complete binary tree.

Your task is to convert the given binary search tree into a Min Heap and print the preorder traversal of the updated binary search tree.

Note:

Binary Search Tree is a node-based binary tree data structure that has the following properties:

1. The left subtree of a node contains only nodes with keys lesser than the node’s key.
2. The right subtree of a node contains only nodes with keys greater than the node’s key.
3. The left and right subtree each must also be a binary search tree.
*/

#include <iostream>
using namespace std;
//TC SC O(n)
void inorder(BinaryTreeNode* root, vector<int>& in){
	if(root==NULL){
		return ;
	}

	inorder(root->left, in);
	in.push_back(root->data);
	inorder(root->right, in);
}

void fillPreOrder(BinaryTreeNode* root, vector<int>& in, int& index){
	if(root==NULL){
		return ;
	}

	root->data= in[index++];
	fillPreOrder(root->left, in, index);
	fillPreOrder(root->right, in, index);
}

BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	// Write your code here.
	vector<int> in;
	inorder(root, in);

	int index=0;
	fillPreOrder(root, in, index);

	return root;
}

int main(){
    
    return 0;
}