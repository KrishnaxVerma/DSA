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

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;

    }
    cout<<endl;
}

int getLength(node* &head){
    int count=0;

    node* temp= head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
node* middle(node* &head){

    int l=getLength(head);
    int ans=l/2;

    node* temp= head;
    while(ans--){
        temp=temp->next;
    }

    return temp;
}

node* getMiddle(node* &head){

    //empty or single node linked list
    if(head==NULL || head->next==NULL){
        return head;
    }

    //2 node linked list
    if(head->next->next==NULL){
        return head->next;
    }

    node* slow=head;
    node* fast=head->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }

    return slow;
}
int main(){
    node* n= new node(6);
    node* head=n;
    InsertAtHead(head,5);
    InsertAtHead(head,4);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    
    node* ans=middle(head);
    cout<<"Middle element is "<<ans->data<<endl;
    ans=getMiddle(head);
    cout<<"Middle element is "<<ans->data<<endl;
    return 0;
}