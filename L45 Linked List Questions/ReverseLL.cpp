#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void InsertAtHead (node* &head, int d){

    //new node create
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

void reverse(node* &head){//iterative approach

    //for empty and one node linked list
    if(head==NULL || head->next==NULL){
        return ;
    }

    node* prev=NULL;
    node* curr= head;
    node* forward=NULL;
    while(curr!=NULL){
        forward= curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
}
void rev(node* &head, node* &prev, node* &curr){//recursive approach
    
    if(curr==NULL){
        head= prev;
        return ;
    }

    node* forward=curr->next;
    rev(head,curr,forward);
    curr->next=prev;
    
}
void reverse2(node* &head){
    
    node* curr= head;
    node* prev= NULL;
    rev(head,prev,curr);
}


node* reverse3(node* &head){//recursive approach #2

    if(head==NULL || head->next==NULL){
        return head;
    }

    node* smallhead=reverse3(head->next);

    head->next->next=head;
    head->next=NULL;

    return smallhead;
}
int main(){
    node* n= new node(1);
    node* head=n;
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    InsertAtHead(head,4);
    InsertAtHead(head,5);
    print(head);

    reverse(head);
    print(head);
    reverse2(head);
    print(head);
    head=reverse3(head);
    print(head);
    return 0;
}