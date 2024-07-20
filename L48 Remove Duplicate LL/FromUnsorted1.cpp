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

        cout<<"Delete"<<endl;

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


//Time complexity O(n^2)
//Space complexity O(n)

void RemoveDup(node* &head){

    if(head==NULL){
        return ;
    }

    node* curr=head;
    while(curr!=NULL){
        node* temp=curr->next;
        node* prev=curr;
        while(temp!=NULL){
            if(temp->data==curr->data){
                prev->next=temp->next;
                node* nodetodelete=temp;
                temp=temp->next;
                delete(nodetodelete);

            }
            else{
            temp=temp->next;
            prev=prev->next;
            }
        }
        curr=curr->next;
    }
    
    
}
int main(){

    node* n= new node(2);
    node* head=n;

    InsertAtHead(head,2);
    InsertAtHead(head,4);
    InsertAtHead(head,5);
    InsertAtHead(head,2);
    InsertAtHead(head,4);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    InsertAtHead(head,0);
    InsertAtHead(head,1);
    InsertAtHead(head,0);

    print(head);

    RemoveDup(head);

    print(head);
    return 0;
}