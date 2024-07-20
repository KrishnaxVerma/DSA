#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next=NULL;
    }

    //destructor
    ~node(){
        if(this->next!=NULL){
            this-> next= NULL;
            delete next;
        }

    }
};

void InsertAtHead (node* &head, int d){

    node* temp= new node(d);
    temp -> next= head;
    head= temp;
}

void print(node* &head){
    node* temp= head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;

    }
    cout<<endl;
}

node* getmid(node* head){

    node* slow= head;
    node* fast= head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

node* merge(node* left, node* right){

    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }

    node* ans= new node(-1);
    node* temp= ans;

    while(left!=NULL && right!=NULL){
        
        if(left->data < right->data){
            temp->next= left;
            temp= left;
            left= left->next;
        }
        else{
            temp->next= right;
            temp= right;
            right= right->next;
        }
    }

    while(left!=NULL){
        temp->next= left;
        temp= left;
        left= left->next;
    }

    while(right!=NULL){
        temp->next= right;
        temp= right;
        right= right->next;
    }

    ans= ans->next;

    return ans;
}

node* sort(node* head){

    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    //break linked list into two halves
    node* mid= getmid(head);

    node* left= head;
    node* right= mid->next;
    mid->next=NULL;

    //recursive call
    left= sort(left);
    right= sort(right);

    //merge both left and right part
    node* result= merge(left,right);

    return result;
}

//TC O(nlogn)  SC O(logn)
int main(){
    
    node* n1= new node(0);
    node* head= n1;
    InsertAtHead(head,5);
    InsertAtHead(head,8);
    InsertAtHead(head,57);
    InsertAtHead(head,44);
    InsertAtHead(head,525);
    InsertAtHead(head,7);
    InsertAtHead(head,89);
    InsertAtHead(head,4);
    InsertAtHead(head,9);
    InsertAtHead(head,2);

    print(head);
    node* ans= sort(head);
    print(ans);
    return 0;
}