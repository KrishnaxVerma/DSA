#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this->next=NULL;
    }

    //destructor
    ~node(){
        int value = this->data;
        //memory free code
        if(this->next!=NULL){
            this-> next= NULL;
            delete next;
        }

        cout<<"Memory is free for the data with value "<<value<<endl;
    }
};

void InsertAtHead (node* &head, int d){

    //new node create
    node* temp= new node(d);
    temp -> next= head;
    head= temp;
}

void InsertAtTail(node* &tail, int d){

    //new node create
    node* temp= new node(d);
    tail -> next= temp;
    tail= temp;
}

void InsertAtPosition(node* &tail, node* &head, int position, int d){

    //insert at start
    if(position==1){
        InsertAtHead(head,d);
        return ;
    }

    node* temp= head;
    int count=1;

    while(count<position-1){
        temp= temp-> next;
        count++;
    }

    //insert at tail
    if(temp-> next == NULL){
        InsertAtTail(tail, d);
        return ;
    }

    //new node create
    node* nodetoinsert =new node(d);
    nodetoinsert-> next =temp-> next;
    temp-> next= nodetoinsert;
}

void print(node* &head){
    node* temp= head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;

    }
    cout<<endl;
}

void deletenode(int position, node* &head,node* &tail){

    //delete first or start node
    if(position==1){
        node* temp = head;
        head= head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle or end node
        node* curr = head;
        node* prev = NULL;

        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        
        if(curr->next==NULL){//if we are deleting last node we have to update the tail
            tail=prev;
        }
        prev->next= curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){

    //created a new node
    node* node1 = new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //head pointed to node1
    node* head= node1;
    node* tail= node1;
    print(head);

    InsertAtTail(tail,12);
    print(head);

    InsertAtTail(tail,15);
    print(head);

    InsertAtPosition(tail,head,3,99);
    print(head);

    InsertAtPosition(tail,head,1,17);
    print(head);

    InsertAtPosition(tail,head,6,0);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deletenode(1,head,tail);
    print(head);
    deletenode(5,head,tail);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}