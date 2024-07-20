#include <iostream>
using namespace std;

void inorder(BinaryTreeNode<int>* root, vector<int> &vec){
    if(root==NULL){
        return ;
    }

    inorder(root->left, vec);
    vec.push_back(root->data);
    inorder(root->right, vec);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> vec;
    inorder(root, vec);

    int sum;
    bool ans= false;
    int i=0,j=vec.size()-1;
    while(i<j){
        sum= vec[i]+vec[j];
        if(sum>target) j--;
        else if(sum<target) i++;
        else{
            ans =true;
            break;
        } 
    }

    return ans;
}

int main(){
    
    return 0;
}