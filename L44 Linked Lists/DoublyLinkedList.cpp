#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    public:
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~node(){
        int val= this->data;
        if(next!=NULL){
            next=NULL;
            delete next;
        }
        cout<<"Memory free for data with value : "<<val<<endl;
    }
};

//traverse every element of linked list
void print(node* head){

    node* temp= head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

//gives length of linked list
int getLength(node* head){

    int len=0;
    node* temp= head;
    while(temp!= NULL){
        len++;
        temp=temp->next;
    }

    return len;
}

void InsertAtHead(node* &head, node* &tail, int d){

    //for empty linked list
    if(head==NULL){
        node* temp= new node(d);
        head= temp;
        tail =temp;
    }
    else{
        node* temp= new node(d);
        temp->next= head;
        head->prev= temp;
        head= temp;
    }

}

void InsertAtTail(node* &head, node* &tail, int d){
    
    //for empty linked list
    if(tail==NULL){
        node* temp = new node(d);
        head= temp;
        tail= temp;
    }
    else{
        node* temp= new node(d);
        tail->next=temp;
        temp->prev=tail;

        tail=temp;
    }

}

void InsertAtPosition(node* &head, node* &tail, int poisition, int d){

    //inserting at first position
    if(poisition==1){
        InsertAtHead(head,tail,d);
        return ;
    }

    node* temp= head;
    
    int count=1;
    while(count<poisition-1){
        temp=temp->next;
        count++;
    }

    //inserting at last position
    if(temp->next==NULL){
        InsertAtTail(head,tail,d);
        return ;
    }

    //inserting at middle position
    node* nodetoinsert= new node(d);

    temp->next->prev= nodetoinsert;
    nodetoinsert->prev= temp;
    nodetoinsert->next= temp->next;
    temp->next= nodetoinsert;
}

void deletenode(int position, node* &head,node* &tail){

    //deleting for first node
    if(position==1){
        node* temp= head;
        temp->next->prev=NULL;
        head= temp->next;
        temp->next= NULL;
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
        
        if(curr->next == NULL){
            tail=prev;
        }

        curr->prev= NULL;
        prev->next= curr->next;
        curr->next= NULL;
        delete curr;
    }
}

int main(){
    
    node* node1= new node(10);
    node* head= node1;
    node* tail= node1;

    print(head);
    cout<<"Length of node: "<<getLength(head)<<endl;

    InsertAtHead(head,tail,11);
    print(head);
    InsertAtHead(head,tail,12);
    print(head);

    InsertAtTail(head,tail,9);
    print(head);

    InsertAtPosition(head,tail,5,0);
    print(head);

    deletenode(5,head,tail);
    print(head);

    cout<<"Head "<<head->data<<" tail "<<tail->data<<endl;
    return 0;
}