#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data= d;
        this->left= NULL;
        this->right= NULL;
    }
};

void inorder(Node* root){//LNR

    //base case
    if(root==NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){//NLR

    //base case
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){//LRN

    //base case
    if(root==NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp= q.front();
        q.pop();

        if(temp==NULL){//last level is completed
            cout<<endl;
            if(!q.empty()){//queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

// TC O(H) SC O(H)
Node* insertIntoBST(Node* &root, int d){
    //base case
    if(root == NULL){
        root= new Node(d);
        return root;
    }

    if(d > root->data){
        //right part me insert karna h
        root->right= insertIntoBST(root->right, d);
    }
    else{
        //left part me insert karna h
        root->left= insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(Node* &root){

    int data;
    cin>>data;

    while(data!=-1){
        root= insertIntoBST(root, data);
        cin>>data;
    }
}

Node* minVal(Node* root){
    Node* temp= root;
    while (temp->left!=NULL){
        temp= temp->left;
    }

    return temp;    
}

Node* maxVal(Node* root){
    Node* temp= root;
    while(temp->right!=NULL){
        temp= temp->right;
    }

    return temp;
}

// TC O(H) worst O(n)
Node* deletefromBST(Node* root, int val){
    //base case
    if(root == NULL){
        return root;
    }

    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1 child

        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //left child
        if(root->left==NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini= minVal(root->right)->data;
            root->data= mini;
            root->right= deletefromBST(root->right, mini);
            return root;
        }

    }
    else if(root->data > val){
        // left part me aao
        root->left= deletefromBST(root->left, val);
        return root;
    }
    else{
        // right part me aao
        root->right= deletefromBST(root->right, val);
        return root;
    }
}

int main(){
    /*Inorder order traversal of BST is sorted*/
    
    Node* root=NULL;

    cout<<"Enter data to create  BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    cout<<"Printing Inorder"<<endl;
    inorder(root);
    cout<<endl<<"Printing Preorder"<<endl;
    preorder(root);
    cout<<endl<<"Printing Postorder"<<endl;
    postorder(root);

    cout<<endl<<"Min value is: "<<minVal(root)->data<<endl;
    cout<<"Max value is: "<<maxVal(root)->data<<endl;



    // test case 5 2 7 1 3 9 11 -1
    root= deletefromBST(root, 5);
    cout<<endl<<"AFTER DELETION:"<<endl;
    levelOrderTraversal(root);

    cout<<"Printing Inorder"<<endl;
    inorder(root);
    cout<<endl<<"Printing Preorder"<<endl;
    preorder(root);
    cout<<endl<<"Printing Postorder"<<endl;
    postorder(root);

    cout<<endl<<"Min value is: "<<minVal(root)->data<<endl;
    cout<<"Max value is: "<<maxVal(root)->data<<endl;
    return 0;
}