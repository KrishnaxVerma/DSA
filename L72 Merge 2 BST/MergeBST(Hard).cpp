#include <iostream>
using namespace std;

void inorder(TreeNode* root, vector<int>& ans){
    if(root==NULL){
        return ;
    }

    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

void convertIntoSortedDLL(TreeNode *root, TreeNode* &head){
    //base case
    if(root==NULL){
        return ;
    }

    convertIntoSortedDLL(root->right, head);

    root->right= head;
    if(head!=NULL){
        head->left= root;
    }

    head= root;

    convertIntoSortedDLL(root->left, head);
}

TreeNode* mergeLinkedList(TreeNode* head1, TreeNode* head2){

    TreeNode* head= NULL;
    TreeNode* tail= NULL;

    while(head1!=NULL && head2!=NULL){
        if(head1->data < head2->data){
            
            if(head==NULL){
                head= head1;
                tail= head1;
                head1= head1->right;
            }
            else{
                tail->right= head1;
                head1->left= tail;
                tail= head1;
                head1= head1->right;
            }
        }
        else{

            if(head==NULL){
                head= head2;
                tail= head2;
                head2= head2->right;
            }
            else{
                tail->right= head2;
                head2->left= tail;
                tail= head2;
                head2= head2->right;
            }
        }
    }

    while(head1!=NULL){
        tail->right= head1;
        head1->left= tail;
        tail= head1;
        head1= head1->right;
    }

    while(head2!=NULL){
        tail->right= head2;
        head2->left= tail;
        tail= head2;
        head2= head2->right;
    }

    return head;
}

int countNodes(TreeNode* head){
    int count=0;
    TreeNode* temp= head;
    while(temp!=NULL){
        temp= temp->right;
        count++;
    }

    return count;
}

TreeNode* sortedLLtoBST(TreeNode* &head, int n){

    //base case
    if(n<=0 || head==NULL){
        return NULL;
    }

    TreeNode* left= sortedLLtoBST(head, n/2);

    TreeNode* root= head;
    root->left= left;

    head= head->right;

    root->right= sortedLLtoBST(head, n-n/2-1);    
    return root;
}

TreeNode mergeBST(TreeNode *root1, TreeNode *root2)
{
    // step: 1 Convert BST into Sorted DLL
    TreeNode* head1= NULL;
    convertIntoSortedDLL(root1, head1);
    head1->left=NULL;

    TreeNode* head2= NULL;
    convertIntoSortedDLL(root2, head2);
    head2->left= NULL;

    // step 2: Merge sorted Linked List
    TreeNode* head= mergeLinkedList(head1, head2);

    // step 3: Convert Sorted Linked List into BST
    int totalNodes = countNodes(head);
    TreeNode* bstRoot = sortedLLtoBST(head, totalNodes);
    return bstRoot;
}

int main(){
    
    return 0;
}