#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this->next=NULL;
        this->data = data;
    }

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
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



void RemoveDup(node* &head){

    if(head==NULL){
        return ;
    }

    node* curr=head;

    while(curr!=NULL ){

        if( curr->next!=NULL && curr->data==curr->next->data){

            node* nextnext= curr->next->next;
            node* nodeToDelete=curr->next;
            delete(nodeToDelete);
            curr->next=nextnext;
        }
        else{
            curr=curr->next;
        }
    }
    
}
int main(){

    node* n= new node(5);
    node* head=n;

    InsertAtHead(head,4);
    InsertAtHead(head,4);
    InsertAtHead(head,3);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,2);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    InsertAtHead(head,1);
    InsertAtHead(head,1);

    print(head);

    RemoveDup(head);

    print(head);
    return 0;
}