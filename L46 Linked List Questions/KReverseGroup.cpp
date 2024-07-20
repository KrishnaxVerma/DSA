//Time Complexity is O(n)
//Space Complexity is O(n)

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

void InsertAtHead(node* &head, int d){

    node* temp= new node(d);
    temp->next=head;
    head=temp;
}

void print(node* &head){

    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* KReverse(node* &head, int k){

    //base case
    if(head==NULL){
        return head;
    }

    //iterative reverse
    node* next=NULL;
    node* curr=head;
    node* prev=NULL;
    int count=0;

    while(count<k && curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    if(next!=NULL){
        head->next=KReverse(next,k);
    }

    //return head
    return prev;
}

int main(){

    node* n= new node(7);
    node* head= n;
    InsertAtHead(head,6);    
    InsertAtHead(head,5);    
    InsertAtHead(head,4);    
    InsertAtHead(head,3);    
    InsertAtHead(head,2);    
    InsertAtHead(head,1);    
    InsertAtHead(head,0);    
    print(head);

    int k=3;
    node* r=KReverse(head,k);
    print(r);
    return 0;
}