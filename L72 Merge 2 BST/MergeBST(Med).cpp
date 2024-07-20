#include <iostream>
using namespace std;

void inorder(TreeNode* root, vector<int>& v){
    if(root==NULL){
        return ;
    }

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

vector<int> merge(vector<int> &a, vector<int> &b){
    vector<int> arr(a.size() + b.size());

    int k=0,i=,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            arr[k++]= a[i];
            i++;
        }
        else{
            arr[k++]= b[j];
            j++;
        }
    }

    while(i<a.size()){
        arr[k++]=a[i];
        i++;
    }

    while(j<b.size()){
        arr[k++]=b[j];
        j++;
    }

    return arr;
}

TreeNode* solve(vector<int> &v, int s, int e){
    if(s>e){
        return NULL;
    }

    int mid= (s+e)/2;
    TreeNode<int>* root= new TreeNode<int>(v[mid]->data);
    root->left= solve(v, s, mid-1);
    root->right= solve(v, mid+1, e);

    return root;
}

TreeNode* mergeBST(TreeNode *root1, TreeNode *root2)
{
    //store inorder
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    // merge two arrays
    vector<int> mergeArray= merge(bst1, bst2);

    // convert inorder to BST
    int s=0, e= mergeArray.size()-1;

    return solve(mergeArray, s, e);
}

int main(){
    
    return 0;
}